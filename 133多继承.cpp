#include <iostream>
#include <string>

using namespace std;

//��̳��﷨ class ���� : �̳з�ʽ ����1 �� �̳з�ʽ ����2
//���������ͬ����Ա����Ҫ������������

class fua1
{
public:
	int m_a = 100;
};

class fua2
{
public:
	int m_a = 200;
};

class zia1:public fua1 , public fua2
{
public:
	int m_b = 300;
};

int main5()
{
	zia1 a;
	cout << a.fua2::m_a << endl;
	cout << a.m_b << endl;
	

	return 0;
}