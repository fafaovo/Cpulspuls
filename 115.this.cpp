#include <iostream>
using namespace std;

// this����python �� self ����ָ�����ߵı����ָ��
// *this���Ǳ������Ҫ����������return *this
// ��������ʹ�����ò��ܷ������壬���򷵻ؿ��� 


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
	cout << "p2��������:" << p2.age << endl;
	//��ʱ����20
	p2.add(p1).add(p1);
	cout << "p2��������:" << p2.age << endl;
	//��ʱ����ԭ��20�Ļ���������10������10 ��Ϊÿ�η���p2����,���Կ����ٴε���
	return 0;
}