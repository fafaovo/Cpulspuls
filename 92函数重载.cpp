#include <iostream>
using namespace std;

void fun1(int a)
{
	cout << "����int:" << a << endl;
}
void fun1(double a)
{
	cout << "����double:" << a << endl;
}

void fun1()
{
	cout << "��ɶ��û��" << endl;
}

void fun2(int a, double b)
{
	cout << "��int��double" << endl;
}
void fun2( double b, int a )
{
	cout << "��double��int" << endl;
}


int main()
{
/* 
	1.��Ҫͬһ����������
	2.��������ͬ
	3.�����������Ͳ�ͬ�����߸�����ͬ������˳��ͬ
	4.��������ֵ��������Ϊ�������ص�����
*/
	fun1(1);
	fun1(1.0);
	fun1();
	fun2(1, 1.0);
	fun2(1.0, 1);
	return 0;
}
