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
	//����
	WorkerManagr();

	//��ʾ�˵�
	void Show_Menu();

	//����ְ��
	void Add_Emp();

	//��ʾԱ��
	void Show_Emp();

	//����
	~WorkerManagr();

	//��¼�ļ�������
	int m_EmpNum;
	//Ա�������ָ�� ˳���汾 ���ָ������
	Worker** m_EmpArray;
};


