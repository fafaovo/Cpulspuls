#include "head.h"

//初始化
void InitContact(stuContact* ps)
{
	ps->size = 0;
}

//添加
void AddContact(stuContact* ps) 
{
	assert(ps);
	if (ps->size == STUMAX)
	{
		cout << "通讯录已满" << endl;
		return;
	}
	else
	{
		cout << "请输入姓名" << endl;
		cin >> ps->add[ps->size].name;

		cout << "请输入性别:\n1-- 男 \n2-- 女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2) {
				ps->add[ps->size].sex = sex;
				break;
			}
		}

		cout << "请输入年龄" << endl;
		cin >> ps->add[ps->size].age;

		cout << "请输入电话" << endl;
		cin >> ps->add[ps->size].phone;

		cout << "请输入住址" << endl;
		cin >> ps->add[ps->size].address;
		
		ps->size++;

		cout << "添加成功" << endl;

		system("pause");
		system("cls"); //清屏
	}
}

//显示
void ShowContact(stuContact* ps)
{
	if (ps->size == 0)
	{
		cout << "通讯录为空" << endl;
		return;
	}
	for (int i = 0; i < ps->size; i++)
	{
		cout <<"姓名： " << ps->add[i].name << "\t";
		if (ps->add[i].sex == 1)
		{
			cout << "性别： " << "男" << "\t";
		}
		else
		{
			cout << "性别： " << "女" << "\t";
		}	
		cout << "年龄： " << ps->add[i].age << "\t";
		cout << "电话： " << ps->add[i].phone << "\t";
		cout << "地址： " << ps->add[i].address  << endl;
	}
	system("pause");
	system("cls");
}

//查找底数
int FindByname(stuContact* ps, string name)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->add[i].name == name)
		{
			return i;
		}
	 }
	return -1; 
}

//删除
void delContact(stuContact* ps)
{
	cout << "请输入要删除的姓名: " << endl;
	string name;
	cin >> name;
	int pos = FindByname(ps, name);
	if (pos == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		for (int i = pos; i < ps->size; i++)
		{
			ps->add[i] = ps->add[i + 1];
		}
		ps->size--;
		cout << "删除成功" << endl;
	}
	system("pause");
	system("cls");
}

//查找
void SeekContact(stuContact* ps)
{
	cout << "请输入要查找的姓名: " << endl;
	string name;
	cin >> name;
	int pos = FindByname(ps, name);
	if (pos == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		cout << "姓名： " << ps->add[pos].name << "\t";
		if (ps->add[pos].sex == 1)
		{
			cout << "性别： " << "男" << "\t";
		}
		else
		{
			cout << "性别： " << "女" << "\t";
		}
		cout << "年龄： " << ps->add[pos].age << "\t";
		cout << "电话： " << ps->add[pos].phone << "\t";
		cout << "地址： " << ps->add[pos].address << endl;
	}
	system("pause");
	system("cls");
}

//修改
void ModifyContact(stuContact* ps)
{
	cout << "请输入要修改的姓名: " << endl;
	string name;
	cin >> name;
	int pos = FindByname(ps, name);
	if (pos == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		cout << "请输入新的姓名" << endl;
		cin >> ps->add[pos].name;

		cout << "请输入新的性别:\n1-- 男 \n2-- 女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2) {
				ps->add[ps->size].sex = sex;
				break;
			}
		}

		cout << "请输入新的年龄" << endl;
		cin >> ps->add[ps->size].age;

		cout << "请输入新的电话" << endl;
		cin >> ps->add[ps->size].phone;

		cout << "请输入新的住址" << endl;
		cin >> ps->add[ps->size].address;

		cout << "修改成功" << endl;
	}
	system("pause");
	system("cls");
}

//清空
void RemoveContact(stuContact* ps)
{
	ps->size = 0;
	cout << "已清空" << endl;
	system("pause");
	system("cls");
}


