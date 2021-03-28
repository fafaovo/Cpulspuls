#include <iostream>
using namespace std;

class Person
{
public:
	//构造函数 -> 初始化 
	//析构函数 -> 清理
	// 这两个会被编译器自动调用,当我们提供时,用我们提供的,当我们没提供时,会默认提供一个执行
	//构造函数语法: 类名(){}
	//析构函数语法: ~类名(){} 不可以有参数
	//1.构造函数
	Person()
	{
		cout << "Person 构造函数调用" << endl;
	}
	//2.析构函数
	~Person()
	{
		cout << "Person 析构函数调用" << endl;
	}
};

void test01()
{
	Person p; //这是在栈上的数据,执行完毕后会释放
}

int maintest()
{
	test01();

	Person s; 
	system("pause");
	return 0;
}

