#include <iostream>
#include <string>

using namespace std;

class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger p);
public:
	MyInteger() :m_Num(0)
	{

	}
	//重载++运算符 重载分为前置++和后置的++
	//前置++
	MyInteger &operator++()
	{
		m_Num++;
		return *this;
	}
	//后置++
	// void operator++(int) int 代表的是占位参数，用于区分为前置和后置递增
	MyInteger operator++(int)
	{
		MyInteger temp = *this;
		m_Num++;
		return temp;
	}


private:
	int m_Num;
};

ostream &operator<<(ostream& cout, MyInteger p)
{
	cout << p.m_Num;
	return cout;
}



int main()
{
	MyInteger a;
	cout << a << endl;
	cout << ++a << endl;
	cout << a++ << endl;
	

	return 0;
}