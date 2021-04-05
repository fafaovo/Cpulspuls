#include <iostream>
#include <string>

using namespace std;

//多继承语法 class 子类 : 继承方式 父类1 ， 继承方式 父类2
//当父类出现同名成员，需要加作用域区分

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