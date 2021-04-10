#include <iostream>
using namespace std;
#include <fstream>


class Person
{
public:
	char m_Name[64];
	int m_Age;
};

//写文件
void test01()
{
	//1.创建流对象
	ofstream ofs;
	//2.打开文件
	ofs.open("person.txt", ios::out | ios::binary);
	//3.写文件
	Person p = { "张三",18 };
	ofs.write((const char*)&p, sizeof(Person));
	//4.关闭文件
	ofs.close();
}

//读文件
void test02()
{
	//1创建流对象
	ifstream ifs;
	//2.打开文件
	ifs.open("person.txt", ios::in | ios::binary);
	if (!(ifs.is_open()))
	{
		cout << "打开失败" << endl;
		return;
	}
	//3.读文件
	Person p;

	ifs.read((char*)&p, sizeof(Person));

	cout << "姓名:" << p.m_Name << "年龄:" << p.m_Age << endl;


	//4.关闭文件
	ifs.close();
}

int main()
{
	test02();
	return 0;
}