#pragma once

#include <iostream>
#include <stdlib.h>
#include <string>
#include <assert.h>
#define STUMAX 100

using namespace std;

//联系人的结构体
typedef struct stu{
	string name;
	int sex;
	int age;
	string phone;
	string address;
}stu;

//通讯录的结构体
typedef struct stuContact {
	stu add[STUMAX];
	int size;
}stuContact;

enum Menu {
	add = 1,
	show = 2,
	del = 3,
	seek = 4,
	modify = 5,
	delStu = 6,
};

//初始化
void InitContact(stuContact * ps);
//添加
void AddContact(stuContact* ps);
//显示
void ShowContact(stuContact* ps);
//删除
void delContact(stuContact* ps);
//查找
void SeekContact(stuContact* ps);
//修改
void ModifyContact(stuContact* ps);
//清空
void RemoveContact(stuContact* ps);