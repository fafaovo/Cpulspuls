#pragma once

#include <iostream>
#include <stdlib.h>
#include <string>
#include <assert.h>
#define STUMAX 100

using namespace std;

//��ϵ�˵Ľṹ��
typedef struct stu{
	string name;
	int sex;
	int age;
	string phone;
	string address;
}stu;

//ͨѶ¼�Ľṹ��
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

//��ʼ��
void InitContact(stuContact * ps);
//���
void AddContact(stuContact* ps);
//��ʾ
void ShowContact(stuContact* ps);
//ɾ��
void delContact(stuContact* ps);
//����
void SeekContact(stuContact* ps);
//�޸�
void ModifyContact(stuContact* ps);
//���
void RemoveContact(stuContact* ps);