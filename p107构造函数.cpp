#include <iostream>
using namespace std;

/*
���ַ���
	��������Ϊ���вι�����޲ι���
	�����ͷ�Ϊ����ͨ����Ϳ�������
���ֵ��÷�ʽ:
	���ŷ�
	��ʾ��
	��ʽת����
*/

class Person2
{
public:
	//��ͨ���캯��
	Person2()
	{
		cout << "�޲ι���" << endl;
	}
	Person2(int a)
	{
		age = a;
		cout << "�вι���" << endl;
	}
	//�������캯��
	Person2(const Person2& p)
		//����һ��һģһ��������,���Ҳ��ܸı�
	{
		//������������ϵ�����,������������
		age = p.age;
		cout << "�������캯������" << endl;
	}
	int age;
};

void test01()
{
	//���ŷ�
	Person2 p1; //����Ĭ�Ϲ��캯�� ע��:����Ĭ�Ϲ��캯��ʱ,��Ҫ��(),��Ϊ����()�󣬱���������Ϊ�Ǻ�������
	Person2 p2(10); //�����вι��캯��
	Person2 p3(p2); // ���ÿ������캯��
	cout << "p2������" << p2.age << endl;
	cout << "p3������" << p3.age << endl;
	//��ʾ��
	Person2 p4 = Person2(10); //�в�
	Person2 p5 = Person2(p4); //����
	// Person2(10) �������������,�ص㵱ǰ��ִ�к�ᱻ�ͷ�

	//��ʽת����
	Person2 p6 = 10; //�в�
	Person2 p7 = p6; //����
}

int main()
{
	test01();

	system("pause");
	return 0;
}