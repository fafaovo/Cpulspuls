#include <iostream>
#include <string>

using namespace std;

class Person2
{
public:
	int m_a;
	int m_b;
	int m_c;
	int m_d;
	Person2():m_a(10), m_b(10), m_c(10), m_d(10)
	{

	}
};
//���������ֻ��ʹ��ȫ�ֺ���
//��Ϊʹ�ó�Ա�����޷�ʹcout�����
//ostream ��׼�����
ostream &operator<<(ostream &cout,Person2 &p)
{
	cout << "m_A = " << p.m_a << "m_B = " << p.m_b;
	return cout;
}
//�����������ʱ��Ϊȫ�ֱ���ʱ��
//��һ�����������������ߣ��ڶ�����������������ұ�
//����cout��ԭ����Ϊ�˺�����endl������һ����ʽ��ɣ������ڷ���this

int main2()
{
	Person2 p;
	cout << p << endl;;
	return 0;
}