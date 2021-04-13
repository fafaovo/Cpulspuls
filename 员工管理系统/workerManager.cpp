#include "workerManager.h"

// WorkerManagr的构造函数
WorkerManagr::WorkerManagr()
{	
	//文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in); // 读文件

	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
		//记录文件中人数
		this->m_EmpNum = 0;
		//员工数组的指针 顺序表版本 存放指针数组
		this->m_EmpArray = NULL;
		//初始化文件是否为空
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//文件为空
	else
	{
		//当有文件时，先判断文件是否为空
		//先定义一个字符，如果是空文件，
		//那么读取就会得到一个EOF
		char ch;
		ifs >> ch;
		if (ifs.eof())
		{
			cout << "文件为空" << endl;
			this->m_EmpNum = 0;
			this->m_EmpArray = NULL;
			this->m_FileIsEmpty = true;
			ifs.close();
			return;
		}
		//有数据
		else
		{
			ifs.close();
			ifstream ifs;
			ifs.open(FILENAME, ios::in);

			int num = this->get_Num();
			int id;
			string name;
			int did;
			int index = 0;
			
			cout << "职工人数为" << num << endl;
			this->m_EmpNum = num;
			//开辟空间
			Worker** oldwork = new Worker*[num];
			while (ifs >> id && ifs >> name && ifs >> did)
			{
				Worker * work = NULL;
				if (did == 1)
				{
					work = new Employee(id, name, 1);
				}
				else if (did == 2)
				{
					work = new Manager(id, name, 2);
				}
				else
				{
					work = new boss(id, name, 3);
				}
				oldwork[index] = work;
				index++;
			}
			this->m_EmpArray = oldwork;
			ifs.close();
		}
	}
}

//统计人数
int WorkerManagr::get_Num()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);	

	int id;
	string name;
	int did;
	int num = 0;

	while (ifs >> id && ifs >> name && ifs >> did)
	{
		num++;
	}
	return num;
}

//添加单个员工
Worker* Add(string i)
{
	//因为id随数组个数变化，所以我们只需要定义
	//名字和编号和职位就行	
	string name;
	int DeptId;
	int dselect;
	Worker* work;

	cout << "请输入" << i << "员工的名字: " << endl;
	cin >> name;
	cout << "请输入" << i << "员工的编号: " << endl;
	cin >> DeptId;
	cout << "请输入" << i << "员工的职位(1.员工 2.经理 3.老板): " << endl;
	cin >> dselect;
	if (dselect == 1)
	{
		work = new Employee(DeptId, name, 1);
	}
	else if (dselect == 2)
	{
		work = new Manager(DeptId, name, 2);
	}
	else
	{
		work = new boss(DeptId, name, 3);
	}
	return work;
}

//增加员工
void WorkerManagr::Add_Emp()
{
	cout << "请输入增加职工的数量" << endl;

	int addnum = 0;
	cin >> addnum;

	if (addnum > 0)
	{
		//计算需要开辟空间的大小
		int addsize = this->m_EmpNum + addnum;
		//开辟新的空间
		//这是一个存放指针的数组,所以我们需要在堆上开辟
		//一个员工的抽象类的指针
		Worker** newspace = new Worker*[addsize];
		if (newspace == NULL)
		{
			exit;
		}
		//将旧数组的东西丢到新数组里面
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newspace[i] = this->m_EmpArray[i];
			}
		}
		//放入新数据
		for (int i = 0; i < addnum; i++)
		{
			string str = "第" + to_string(i) + "位";
			newspace[this->m_EmpNum + i] = Add(str);		
		}
		//添加完后释放原先地址的指针 然后将新地址赋与
		delete[] this->m_EmpArray;
		this->m_EmpArray = newspace;
		this->m_EmpNum = addsize;
		this->save_Emp();
		system("pause");
		system("cls");
	}
	else
	{
		cout << "输入有误" << endl;
	}
}

//显示员工
void WorkerManagr::Show_Emp()
{
	if (this->m_EmpNum == 0)
	{
		cout << "无数据可打印" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			this->m_EmpArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}

//保存员工
void WorkerManagr::save_Emp()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_id << " "
			<< this->m_EmpArray[i]->m_name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}
	ofs.close();
}

//查找
int WorkerManagr::IsExint_Emp()
{
	int exint = 0;
	cin >> exint;
	if (exit >= 0)
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			if (this->m_EmpArray[i]->m_id == exint)
			{
				return i;
			}
		}
		cout << "没有找到该id的员工" << endl;
		return -1;
	}
	else
	{
		return -1;
	}
	
}

//查找员工
void WorkerManagr::Seek_Emp()
{
	if (this->m_EmpNum == 0)
	{
		cout << "没有可查找的内容";
	}
	else 
	{
		int num = this->IsExint_Emp();
		if (num != -1)
		{
			this->m_EmpArray[num]->showInfo();
		}
	}
	system("pause");
	system("cls");
	
}

//删除员工
void WorkerManagr::Del_Emp()
{
	if (this->m_EmpNum == 0)
	{
		cout << "没有可删除的内容";
	}
	else
	{
		int num = this->IsExint_Emp();
		if (num != -1)
		{
			for (int i = num; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;
			this->save_Emp();
			cout << "删除成功" << endl;
		}		
	}
	system("pause");
	system("cls");
}

//修改员工
void WorkerManagr::Modify_Emp()
{
	if (this->m_EmpNum == 0)
	{
		cout << "没有可删除的内容";
	}
	else
	{
		int num = this->IsExint_Emp();
		if (num != -1)
		{
			//先删除
			delete this->m_EmpArray[num];

			this->m_EmpArray[num] = Add("新");
			this->save_Emp();
			cout << "修改成功" << endl;
		}
	}
	system("pause");
	system("cls");
}

//WorkerManagr的析构函数
WorkerManagr::~WorkerManagr()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}

//显示菜单
void WorkerManagr::Show_Menu()
{
	cout << "*********************************" << endl;
	cout << "*****  欢迎使用职工管理系统  ****" << endl;
	cout << "*******  0.退出管理系统  ********" << endl;
	cout << "*******  1.添加职工信息  ********" << endl;
	cout << "*******  2.显示职工信息  ********" << endl;
	cout << "*******  3.删除职工信息  ********" << endl;
	cout << "*******  4.修改职工信息  ********" << endl;
	cout << "*******  5.查找职工信息  ********" << endl;
	cout << "*******  6.按照编号排序  ********" << endl;
	cout << "*******  7.清空所有文档  ********" << endl;
	cout << "*********************************" << endl;
}
