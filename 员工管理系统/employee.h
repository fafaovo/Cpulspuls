#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

//员工类
class Employee :public Worker
{
public:
	//构造
	Employee(int id, string name, int did);
	//个人信息
	virtual void showInfo();
	//获取职工岗位名称;
	virtual string getDeptName();
};
