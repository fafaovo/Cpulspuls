#include <iostream>
#include <string>
using namespace std;

//���ַ���Ȩ��
//����Ȩ�� public �����Է���
//����Ȩ�� protected ���ڿ��Է��� ���ⲻ���� ���ӿ��Է��ʸ��׵���˽
//˽��Ȩ�� private ���ڿ��Է��� ���ⲻ���� ���Ӳ����Է��ʸ��׵���˽
// class Ĭ��Ȩ����˽�� struct Ĭ��Ȩ���ǹ���

class Person
{
	//����
public:
	string m_name; //����
protected:
	string m_car; //����
private:
	int m_passworld; //���п�����

public:
	void func()
	{
		m_name = "zhangsan";
		m_car = "������";
		m_passworld = 123456;
	}
	//��Щ�������ڷ��ʣ����Բ��ᱨ��
};

int main()
{
	Person p1;
	p1.m_name = "����";
	// p1.m_cat = "����" ����Ȩ������,��������ʲ���


	return 0;
}