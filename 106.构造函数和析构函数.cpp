#include <iostream>
using namespace std;

class Person
{
public:
	//���캯�� -> ��ʼ�� 
	//�������� -> ����
	// �������ᱻ�������Զ�����,�������ṩʱ,�������ṩ��,������û�ṩʱ,��Ĭ���ṩһ��ִ��
	//���캯���﷨: ����(){}
	//���������﷨: ~����(){} �������в���
	//1.���캯��
	Person()
	{
		cout << "Person ���캯������" << endl;
	}
	//2.��������
	~Person()
	{
		cout << "Person ������������" << endl;
	}
};

void test01()
{
	Person p; //������ջ�ϵ�����,ִ����Ϻ���ͷ�
}

int maintest()
{
	test01();

	Person s; 
	system("pause");
	return 0;
}

