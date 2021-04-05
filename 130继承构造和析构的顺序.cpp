#include <iostream>
#include <string>

using namespace std;

//父类和子类的构造和析构顺序遵循先进后出原则
//子类从父类继承的同名对象，直接访问是子类的，
//如果想访问到父类直接给作用域就行



class a1
{
public:
	int m_a = 100;
};

class a2 :public a1
{
public:
	int m_a = 200;
};

int main4()
{
	a2 a;
	cout << a.m_a << endl;
	cout << a.a1::m_a << endl;
	//访问到父类直接给作用域 对象.作用域::成员
	return 0;
}

//如果子类中出现和父类同名的成员函数,
//子类的同名成员会隐藏掉父类中所有的同名成员
// 
// 
//也就是说不可以直接访问到父类的同名重载函数
//还是需要增加作用域