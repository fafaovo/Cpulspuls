#include <iostream>
using namespace std;

/*
拷贝构造函数调用通常情况

*/

// 1. 使用一个已经创建完毕的对象来初始化一个新对象
// 2. 值传递的方式给函数参数传值
// 3. 值方式返回局部对象

/*
拷贝又分浅拷贝和深拷贝
编译器自带的等号赋值的操作叫浅拷贝
重新在堆区创建一块内存叫深拷贝

如果有堆区有内存空间,需要在析构代码里面把堆区释放
*/


class Person
{
public:
	Person()
	{
		cout << "默认构造函数调用" << endl;
	}
	Person(int age, int height)
	{
		cout << "有参函数调用" << endl;
		m_Age = age;
		m_Height = new int(height);
		//这边会在堆栈创建一块空间,并且返回一个指针
		
	}
	Person(const Person& p)
	{
		cout << "拷贝函数调用" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;
		//这种拷贝是编译器默认的浅拷贝,在~释放时会导致同一块空间重复释放
		//深拷贝
		m_Height = new int(*p.m_Height);
	}
	~Person()
	{
		//析构代码用途，将堆区开辟数据释放操作
		if (m_Height != NULL)
		//
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "析构函数调用" << endl;
	}
	int m_Age;
	int* m_Height; //身高，是个指针
};

// 1. 使用一个已经创建完毕的对象来初始化一个新对象
void test1()
{
	Person p1(20, 120);
	Person p2(p1); //此处p2就是
	cout << "p2的年龄是" << p2.m_Age << endl;
}
// 2. 值传递的方式给函数参数传值
void doWork(Person p)
{

}

void test2()
{
	Person p;
	doWork(p); //实参传给形参的时候会调用拷贝函数
}
// 3. 值方式返回局部对象
Person doWork2()
{
	Person p1;
	return p1; 
	//局部对象返回时会按照这个对象拷贝一个新的对象返回给外部
}
void test3()
{
	Person p = doWork2();
}

int main()
{
	// test1();
	//test2();
	test3();
	return 0;
}