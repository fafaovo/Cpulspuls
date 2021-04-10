/*
ͷ�ļ� fstream

ofstream д����
ifstream ������
fstream  ��д����

�򿪷�ʽ
ios::in Ϊ����
ios::out Ϊд��
ios::ate ��ʼ��λ��β
ios::app ׷��
ios::trunc ���ļ���ɾ�����ٴ���
ios::binary �����Ʒ�ʽ
������������� | �ָ�
*/
#include <iostream>
using namespace std;
#include <fstream>
#include <string>


int main1()
{
	//1.���������� ofs������
	ofstream ofs;
	//2.ָ���򿪷�ʽ ������.open(·��,�򿪷�ʽ)
	ofs.open("test.txt", ios::out);
	//3.д����
	ofs << "����:����" << endl;
	ofs << "�Ա�:��" << endl;
	ofs << "����:18" << endl;
	//4.�ر�
	ofs.close();

	system("pause");
	return 0;
}

int main2()
{
	//1.����������
	ifstream ifs;
	//2.���ļ� �ж��Ƿ�򿪳ɹ� ������.is_open() �򿪳ɹ�����true
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return 0;
	}
	//3.������
	//��һ�ַ�ʽ
	/*
	char buf[1024] = { 0 };
	while (ifs >> buf) {
		cout << buf << endl;
	}
	*/
	//�ڶ��ַ�ʽ ��ȡһ��(��Ԫ�ص�ַ ,��ȡ���ֽ���)
	/*
	char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}
	*/
	//�����ַ�ʽ
	string buf;
	while (getline(ifs,buf))
	{
		cout << buf << endl;
	}
	//������ ���Ƽ� һ��һ����ȡ
	/*
	char c;
	while ((c=ifs.get())!= EOF)
	{
		cout << c;
	}
	*/
	//4.�ر��ļ�
	ifs.close();

	system("pause");
	return 0;
}