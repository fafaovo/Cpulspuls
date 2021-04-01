#include <iostream>
#include <string>

using namespace std;

class Person2
{
public:
	int m_a;
	int m_b;
	int m_c;
	int m_d;
	Person2():m_a(10), m_b(10), m_c(10), m_d(10)
	{

	}
};
//左移运算符只能使用全局函数
//因为使用成员函数无法使cout在左侧
//ostream 标准输出流
ostream &operator<<(ostream &cout,Person2 &p)
{
	cout << "m_A = " << p.m_a << "m_B = " << p.m_b;
	return cout;
}
//当运算符重载时作为全局变量时，
//第一个参数在运算符的左边，第二个参数在运算符的右边
//返回cout的原因是为了后续的endl，这是一种链式变成，类似于返回this

int main2()
{
	Person2 p;
	cout << p << endl;;
	return 0;
}