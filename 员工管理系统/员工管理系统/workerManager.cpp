#include "workerManager.h"

// WorkerManagr的构造函数
WorkerManagr::WorkerManagr()
{
	//记录文件中人数
	this->m_EmpNum = 0;
	//员工数组的指针 顺序表版本 存放指针数组
	this->m_EmpArray =NULL;
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
			//因为id随数组个数变化，所以我们只需要定义
			//名字和编号和职位就行
			string name;
			int DeptId;
			int dselect;
			Worker* work;

			cout << "请输入第" << i << "位员工的名字: " << endl;
			cin >> name;
			cout << "请输入第" << i << "位员工的编号: " << endl;
			cin >> DeptId;
			cout << "请输入第" << i << "位员工的职位(1.员工 2.经理 3.老板): " << endl;
			cin >> dselect;
			if (dselect == 1)
			{
				work = new Employee(DeptId,name,1);
			}
			else if (dselect == 2)
			{
				work = new Manager(DeptId, name, 2);
			}
			else 
			{
				work = new boss(DeptId, name, 3);
			}
			newspace[this->m_EmpNum + i] = work;
			
		}
		//添加完后释放原先地址的指针 然后将新地址赋与
		delete[] this->m_EmpArray;
		this->m_EmpArray = newspace;
		this->m_EmpNum = addsize;
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
		system("pause");
		system("cls");
	}
}

//WorkerManagr的析构函数
WorkerManagr::~WorkerManagr()
{

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
