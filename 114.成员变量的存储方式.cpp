#include <iostream>
using namespace std;

//����:ֻ�зǾ�̬����������Ķ�����,ʣ�µĶ�������

class Person3
{

};
class Person4
{
	int a;
};
class Person5
{
	int a;
	static int b;
	void func() {}
};

int main3()
{
	Person3 p;
	Person4 p1;
	Person5 p2;
	cout << "sizeof:" << sizeof(p) << endl;
	//C++���������ÿ���ն������һ���ֽڿռ�,Ϊ�����ֿն���ռ�ڴ��λ��
	//��ռ��é�Ӳ���ʺ
	cout << "sizeof:" << sizeof(p1) << endl;
	//��Ϊ��������ڴ���ռ��é�Ӳ���ʺ��
	//�������밴�ṹ����ڴ����
	cout << "sizeof:" << sizeof(p2) << endl;
	//��̬��Ա�������ھ�̬����ȫ�����������Եõ�����4

	return 0;
}