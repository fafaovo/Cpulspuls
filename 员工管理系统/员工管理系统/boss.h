#pragma once
#include <iostream>
using namespace std;
#include "worker.h"

//老板类
class boss :public Worker
{
public:
	//构造
	boss(int id, string name, int did);
	//个人信息
	virtual void showInfo();
	//获取老板岗位名称;
	virtual string getDeptName();
};
