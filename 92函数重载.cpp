#include <iostream>
using namespace std;

void fun1(int a)
{
	cout << "这是int:" << a << endl;
}
void fun1(double a)
{
	cout << "这是double:" << a << endl;
}

void fun1()
{
	cout << "这啥都没有" << endl;
}

void fun2(int a, double b)
{
	cout << "先int后double" << endl;
}
void fun2( double b, int a )
{
	cout << "先double后int" << endl;
}


int main()
{
/* 
	1.需要同一个作用域下
	2.函数名相同
	3.函数参数类型不同，或者个数不同，或者顺序不同
	4.函数返回值不可以作为函数重载的条件
*/
	fun1(1);
	fun1(1.0);
	fun1();
	fun2(1, 1.0);
	fun2(1.0, 1);
	return 0;
}
