#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

//�ϰ���
class boss :public Worker
{
public:
	//����
	boss(int id, string name, int did);
	//������Ϣ
	virtual void showInfo();
	//��ȡ�ϰ��λ����;
	virtual string getDeptName();
};
