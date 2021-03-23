#include <iostream>
using namespace std;



int main1()
{
	/*
	引用:给变量起别名
	语法:数据类型 &别名 = 原名 
	注意事项:
		1.引用必须初始化
		2.引用在初始化后就不能发生改变了
	引用的作用:
		1.引用传递，行参会修饰实参
	*/
	int a = 10;
	int& b = a;
	//引用会使两个变量指向同一块内存

	cout << "a指向的空间为" << &a << endl;
	cout << "b指向的空间为" << &b << endl;
	//ab指向的是同一个内存空间


	system("pause");
	return 0;
}

void mySwap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main2()
{
	//通过引用参数产生的效果同按地址传递是一样的,但引用的语法更为简单
	int a = 10;
	int b = 20;
	mySwap(a, b);
	cout << "a = " <<a << endl;
	cout << "b = " <<b << endl;
}

int main()
{

}