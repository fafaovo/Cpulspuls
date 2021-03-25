#include <iostream>
using namespace std;

int main11() 
{
	int a = 10;
	int& ref = a;
	//会被编译器转换成int* const ref = &a; 
	ref = 20;
	//当发现ref是引用时,会被编译器转换成*ref = 20;
	//引用的本质就是一个指针常量
	return 0;
}

void showValue(const int& b)
{
	cout << b << endl;
}


int main()
{
	//常量引用:用于修饰行参，防止误操作
	int a = 10;
	//我们都知道引用必须引用一块合法的内存空间，像这样int& ref = 10;会报错
	const int& ref = 10; 
	//这样是允许的，
	//编译器会随便拿个变量=10，然后再引用

	//正确用法,假设我们要打印一个值,但是不打算修改时
	int c = 10;
	int& b = c;

	showValue(b);
	return 0;
}