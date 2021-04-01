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
	//����++����� ���ط�Ϊǰ��++�ͺ��õ�++
	//ǰ��++
	MyInteger &operator++()
	{
		m_Num++;
		return *this;
	}
	//����++
	// void operator++(int) int �������ռλ��������������Ϊǰ�úͺ��õ���
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