#include <iostream>
#include <string>

using namespace std;

class Person3
{
public:
	Person3(int age)
	{
		m_age = new int(age);
	}
	//���ٵ�����������
	~Person3()
	{
		if (m_age != NULL)
		{

			delete m_age;
			m_age = NULL;
		}
	}
	//���ظ�ֵ�����
	Person3& operator=(Person3& p)
	{
		//����this���m_age�������ڶ�����ֱ���ͷ��ڽ������
		//���ֱ�Ӹ�����֮ǰ�ڶ����Ķ������޷�������
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		this->m_age = new int(*p.m_age);
		//Ϊ��ʵ����ʽ˼ά�����Է�������
		return *this;
	}
	int* m_age;
};

void test01()
{
	Person3 s1(18);

	Person3 s2(20);

	Person3 s3(30);

	s1 = s2 = s3;

	//��ֵ���� ���Ǳ������Դ����ͷ�ʱ���ͷ�ͬһ��m_age�Ŀռ�
	//����ǳ����,�ᵼ�³������,����������Ҫ�ع���ֵ�����

	cout << "s1��age:" << *s1.m_age << endl;

	cout << "s2��age:" << *s2.m_age << endl;
	
	cout << "s3��age:" << *s3.m_age << endl;

}

int main4()
{
	test01();
	return 0;
}