#include <iostream>
#include <string>

using namespace std;

class Person1
{
public:
	int m_A;
	int m_B;
	//������ʽдһ������������ӷ���һ���µĶ���
	Person1 Add(Person1& p)
	{
		Person1 temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}
	//����������һ�������� operator+
	//�������˱����������ʱ�����Լ�Ϊp1+p2
	//����ͨ����Ա�������أ���Ȼ��Ҳ����ͨ��ȫ�ֺ�������
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
	/*Ϊʲô��Ҫ���������,�������������ʱ,������������֪����Ҫ��ʲô����������Ҫ����д�����*/
	Person1 p1;
	Person1 p2;
	p1.m_A = 10;
	p1.m_B = 10;
	p2.m_A = 10;
	p2.m_B = 10;
	//������ʽдһ��
	//Person p3 = p1.Add(p2);
	//������������
	//Person1 p3 = p1.operator+(p2);
	Person1 p3 = p1+p2;
	
	cout << p3.m_A << "��" << p3.m_B << endl;
	

	//���������Ҳ���Է�����������
	//���������ֻ���޸��Զ�������
	return 0;
}