#include <iostream>
#include <string>
using namespace std;

/*
�������غ�������������ھ�̬��̬
��������麯��ʵ������ʱ��̬�Ƕ�̬��̬

���ߵ�����,
��̬��̬�ĺ�����ַ��󶨣�����׶�ȷ��������ַ
��̬��̬�ĺ�����ַ��󶨣����н׶�ȷ��������ַ

��̬��̬��������
1.�м̳й�ϵ
2.����Ҫ��д������麯��

��̬��̬��ʹ��
�����ָ��������� ִ������Ķ���
*/

class Animal
{
public:
	//�ڴ˴����virtual ����ʵ���麯�����
	//virtual����������һ���ֽڱ���ĸ��ֽ�
	//���ĸ��ֽ��Ǹ�ָ��
	virtual void speak()
	{
		cout << "�����ڽ�" << endl;
	}
};

//è�� ������
class Cat :public Animal
{
public:
	void speak()
	{
		cout << "Сè�ڽ�" << endl;
	}
};

//ִ��˵������
//���ַ�ʽ�ǵ�ַ��󶨣��ڱ���׶��Ѿ�ȷ�ϵ�ַ
//���Ի��������˵��
//�������è˵�����������������ַ�Ͳ�����ǰ�󶨣���Ҫ���
void doSpeak(Animal& animal)   // Animal & animal = cat;
{
	animal.speak();
}
//��C++��������֮�������ת��

int main()
{
	Cat cat;
	doSpeak(cat);
	return 0;
}