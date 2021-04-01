#include <iostream>
#include <string>

using namespace std;

class Person1
{
public:
	int m_A;
	int m_B;
	//正常方式写一个两个函数相加返回一个新的对象
	Person1 Add(Person1& p)
	{
		Person1 temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}
	//编译器会起一个新名字 operator+
	//当你用了编译器起的名时，可以简化为p1+p2
	//这是通过成员函数重载，当然你也可以通过全局函数重载
	Person1 operator+(Person1& p)
	{
		Person1 temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}
	

};


int main1()
{
	/*为什么需要运算符重载,假设两个类相加时,编译器根本不知道你要干什么，所以你需要重新写运算符*/
	Person1 p1;
	Person1 p2;
	p1.m_A = 10;
	p1.m_B = 10;
	p2.m_A = 10;
	p2.m_B = 10;
	//正常方式写一个
	//Person p3 = p1.Add(p2);
	//看，不报错了
	//Person1 p3 = p1.operator+(p2);
	Person1 p3 = p1+p2;
	
	cout << p3.m_A << "和" << p3.m_B << endl;
	

	//运算符重载也可以发生函数重载
	//运算符重载只能修改自定义类型
	return 0;
}