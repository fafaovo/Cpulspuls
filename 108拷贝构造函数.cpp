#include <iostream>
using namespace std;

/*
�������캯������ͨ�����

*/

// 1. ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
// 2. ֵ���ݵķ�ʽ������������ֵ
// 3. ֵ��ʽ���ؾֲ�����

/*
�����ַ�ǳ���������
�������Դ��ĵȺŸ�ֵ�Ĳ�����ǳ����
�����ڶ�������һ���ڴ�����

����ж������ڴ�ռ�,��Ҫ��������������Ѷ����ͷ�
*/


class Person
{
public:
	Person()
	{
		cout << "Ĭ�Ϲ��캯������" << endl;
	}
	Person(int age, int height)
	{
		cout << "�вκ�������" << endl;
		m_Age = age;
		m_Height = new int(height);
		//��߻��ڶ�ջ����һ��ռ�,���ҷ���һ��ָ��
		
	}
	Person(const Person& p)
	{
		cout << "������������" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;
		//���ֿ����Ǳ�����Ĭ�ϵ�ǳ����,��~�ͷ�ʱ�ᵼ��ͬһ��ռ��ظ��ͷ�
		//���
		m_Height = new int(*p.m_Height);
	}
	~Person()
	{
		//����������;�����������������ͷŲ���
		if (m_Height != NULL)
		//
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "������������" << endl;
	}
	int m_Age;
	int* m_Height; //��ߣ��Ǹ�ָ��
};

// 1. ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test1()
{
	Person p1(20, 120);
	Person p2(p1); //�˴�p2����
	cout << "p2��������" << p2.m_Age << endl;
}
// 2. ֵ���ݵķ�ʽ������������ֵ
void doWork(Person p)
{

}

void test2()
{
	Person p;
	doWork(p); //ʵ�δ����βε�ʱ�����ÿ�������
}
// 3. ֵ��ʽ���ؾֲ�����
Person doWork2()
{
	Person p1;
	return p1; 
	//�ֲ����󷵻�ʱ�ᰴ��������󿽱�һ���µĶ��󷵻ظ��ⲿ
}
void test3()
{
	Person p = doWork2();
}

int main()
{
	// test1();
	//test2();
	test3();
	return 0;
}