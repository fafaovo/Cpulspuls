#pragma once
#include "public.h"


#define FILENAME "empFile.txt"


enum MyEnum
{
	EXIT = 0,
	ADD = 1,
	SHOW = 2,
	DEL = 3,
	MODIFY = 4,
	SEEK = 5,
	SORT = 6,
	REMOVE = 7,
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

	//����Ա��
	void save_Emp();

	//����
	int IsExint_Emp();

	//����Ա��
	void Seek_Emp();

	//�޸�Ա��
	void Modify_Emp();

	//ɾ��Ա��
	void Del_Emp();

	//ͳ������ ͨ��ͳ�Ƴ��ж��ٸ���,Ȼ�󿪱ٶ��ٸ��ռ�
	int get_Num();

	//����
	~WorkerManagr();

	//��¼�ļ�������
	int m_EmpNum;
	//Ա�������ָ�� ˳���汾 ���ָ������
	Worker** m_EmpArray;
	//��־�ļ�Ϊ��
	bool m_FileIsEmpty;
};


