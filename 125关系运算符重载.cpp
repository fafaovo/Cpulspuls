#include <iostream>
#include <string>

using namespace std;

class Person6
{
public:
	Person6(string a, int b)
	{
		m_name = a;
		m_age = b;
	}

	bool operator==(Person6 &p)
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool operator!=(Person6& p)
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	string m_name;
	int m_age;
};


int main6()
{
	Person6 p1("张三",11);
	Person6 p2("张三",11);

	//大于小于号一样
	if (p1 == p2)
	{
		cout << "p1等于p2" << endl;
	}
	else
	{
		cout << "p1不等于p2" << endl;
	}

	if (p1 != p2)
	{
		cout << "p1不等于p2" << endl;
	}
	else
	{
		cout << "p1等于p2" << endl;
	}


	return 0;
}