#include <iostream>
using namespace std;



int main1()
{
	/*
	����:�����������
	�﷨:�������� &���� = ԭ�� 
	ע������:
		1.���ñ����ʼ��
		2.�����ڳ�ʼ����Ͳ��ܷ����ı���
	���õ�����:
		1.���ô��ݣ��вλ�����ʵ��
	*/
	int a = 10;
	int& b = a;
	//���û�ʹ��������ָ��ͬһ���ڴ�

	cout << "aָ��Ŀռ�Ϊ" << &a << endl;
	cout << "bָ��Ŀռ�Ϊ" << &b << endl;
	//abָ�����ͬһ���ڴ�ռ�


	system("pause");
	return 0;
}

void mySwap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main2()
{
	//ͨ�����ò���������Ч��ͬ����ַ������һ����,�����õ��﷨��Ϊ��
	int a = 10;
	int b = 20;
	mySwap(a, b);
	cout << "a = " <<a << endl;
	cout << "b = " <<b << endl;
}

int main()
{

}