#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

//Ա����
class Employee :public Worker
{
public:
	//����
	Employee(int id, string name, int did);
	//������Ϣ
	virtual void showInfo();
	//��ȡְ����λ����;
	virtual string getDeptName();
};
