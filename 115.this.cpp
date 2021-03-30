#include <iostream>
using namespace std;

// this就是python 的 self 就是指调用者的本身的指针
// *this才是本身，如果要返还本体是return *this
// 返还类型使用引用才能返还本体，否则返回拷贝 


class Person6
{
public:
	Person6(int age)
	{
		this->age = age;
	}
	
	Person6& add(Person6 p)
	{
		this->age += p.age;
		return *this;
	}
	int age;
};


int main4()
{
	Person6 p1(10);
	Person6 p2(10);
	p2.add(p1);
	cout << "p2的年龄是:" << p2.age << endl;
	//此时返回20
	p2.add(p1).add(p1);
	cout << "p2的年龄是:" << p2.age << endl;
	//此时会在原有20的基础上增加10再增加10 因为每次返回p2本身,所以可以再次调用
	return 0;
}