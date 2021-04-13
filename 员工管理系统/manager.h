#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

//经理
class Manager :public Worker
{
public:
	//构造
	Manager(int id, string name, int did);
	//个人信息
	virtual void showInfo();
	//获取经理岗位名称;
	virtual string getDeptName();
};
