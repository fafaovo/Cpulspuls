#include <iostream>
using namespace std;

class Person2
{
public:
	//静态成员函数
	static void func() 
	{
		m_A = 100; //静态成员函数可以访问 静态成员变量
		//m_B = 200; //静态成员函数不可以访问 非静态成员变量
		cout << "static void func 调用" << endl;
	}
	//因为此函数是静态函数，所以他在访问非静态成员变量时会找不到m_B
	//即编译器无法区分是哪个对象的m_B
	//意思就是说,你通过这个类实例化的全部属性访问到的都是这个静态变量
	//即共享的，而静态变量的作用域是整个cpp的生命周期,
	//就会导致在栈区的m_b变量在释放后越界,所以说不允许放
	static int m_A;  //静态成员变量
	int m_B;
};
//老师的意思是，静态变量的是整个cpp文件,而局部变量出去就没了，就会导致指针越界

int Person2::m_A = 0;

int main2() 
{
	//1.通过对象访问
 	Person2 P2;
	P2.func();
	//2.通过类名访问
	Person2::func();
	return 0;
}