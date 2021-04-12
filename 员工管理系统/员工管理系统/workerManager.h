#pragma once
#include "public.h"


enum MyEnum
{
	EXIT = 0,
	ADD = 1,
	SHOW = 2,
	DEL = 3,
	MODIFY = 4,
	SEEK = 5,
	SORT = 6,
	REMOVE = 7
};

class WorkerManagr
{
public:
	//构造
	WorkerManagr();

	//显示菜单
	void Show_Menu();

	//增加职工
	void Add_Emp();

	//显示员工
	void Show_Emp();

	//析构
	~WorkerManagr();

	//记录文件中人数
	int m_EmpNum;
	//员工数组的指针 顺序表版本 存放指针数组
	Worker** m_EmpArray;
};


