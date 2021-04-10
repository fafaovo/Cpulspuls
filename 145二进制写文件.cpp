#include <iostream>
using namespace std;
#include <fstream>


class Person
{
public:
	char m_Name[64];
	int m_Age;
};

//д�ļ�
void test01()
{
	//1.����������
	ofstream ofs;
	//2.���ļ�
	ofs.open("person.txt", ios::out | ios::binary);
	//3.д�ļ�
	Person p = { "����",18 };
	ofs.write((const char*)&p, sizeof(Person));
	//4.�ر��ļ�
	ofs.close();
}

//���ļ�
void test02()
{
	//1����������
	ifstream ifs;
	//2.���ļ�
	ifs.open("person.txt", ios::in | ios::binary);
	if (!(ifs.is_open()))
	{
		cout << "��ʧ��" << endl;
		return;
	}
	//3.���ļ�
	Person p;

	ifs.read((char*)&p, sizeof(Person));

	cout << "����:" << p.m_Name << "����:" << p.m_Age << endl;


	//4.�ر��ļ�
	ifs.close();
}

int main()
{
	test02();
	return 0;
}