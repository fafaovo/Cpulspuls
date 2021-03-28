#include <iostream>
using namespace std;

/*
两种分类
	按参数分为：有参构造和无参构造
	按类型分为：普通构造和拷贝构造
三种调用方式:
	括号法
	显示法
	隐式转换法
*/

class Person2
{
public:
	//普通构造函数
	Person2()
	{
		cout << "无参构造" << endl;
	}
	Person2(int a)
	{
		age = a;
		cout << "有参构造" << endl;
	}
	//拷贝构造函数
	Person2(const Person2& p)
		//拷贝一份一模一样的数据,并且不能改变
	{
		//将传入的人身上的属性,拷贝到我身上
		age = p.age;
		cout << "拷贝构造函数调用" << endl;
	}
	int age;
};

void test01()
{
	//括号法
	Person2 p1; //调用默认构造函数 注意:调用默认构造函数时,不要加(),因为加了()后，编译器会认为是函数声明
	Person2 p2(10); //调用有参构造函数
	Person2 p3(p2); // 调用拷贝构造函数
	cout << "p2的年龄" << p2.age << endl;
	cout << "p3的年龄" << p3.age << endl;
	//显示法
	Person2 p4 = Person2(10); //有参
	Person2 p5 = Person2(p4); //拷贝
	// Person2(10) 这个是匿名对象,特点当前行执行后会被释放

	//隐式转换法
	Person2 p6 = 10; //有参
	Person2 p7 = p6; //拷贝
}

int main()
{
	test01();

	system("pause");
	return 0;
}