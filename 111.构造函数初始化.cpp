#include <iostream>
using namespace std;

class Person1
{
public:
	//��һ�ֳ�ʼ������������һ���вι���
	/*
	Person1(int a = 10,int b = 20,int c = 30)
	{
		m_A = a;
		m_B = b;
		m_C = c;
	}
	*/
	//�ڶ��ֳ�ʼ������,ʹ�ó�ʼ���б���г�ʼ��
	/*
	Person1() :m_A(10), m_B(10), m_C(10)
	{

	}
	*/
	//��Ȼ�㻹������ôд
	Person1(int a, int b, int c) :m_A(a), m_B(b), m_C(c)
	{

	}
	int m_A;
	int m_B;
	int m_C;
};

int main1()
{
	//Person1 p1;
	Person1 p1(10,20,30);
	cout << p1.m_A << endl;
	cout << p1.m_B << endl;
	cout << p1.m_C << endl;
	return 0;
}