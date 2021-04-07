#include <iostream>
#include <string>

using namespace std;


//ʵ�ּ�����������
//��̬�ĺô�
//1.��֯�ṹ����
//2.�ɶ���ǿ
//3.����ǰ�ںͺ��ڵ���չ�Լ�ά���Ը�
class AbstractCalculator
{
public:
	/*
	virtual int getResult()
	{
		return 0;
	}
	���Ƿ��ָ����ò����������
	���Կ����ô��麯������
	ֻҪ��һ�����麯���������ͳ�Ϊ������
	1.�޷�ʵ��������
	2.��������������Ҫ��д�����еĴ��麯��
	����Ҳ���ڳ�����

	д����麯����Ŀ�ľ�����������д����ĺ�����ʵ�ֶ�̬
	
	*/
	virtual int getResult() = 0;
	int m_Num1;
	int m_Num2; 
};

//���üӷ�����������
class Add:public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_Num1 + m_Num2;
	}
};
//����
class Sub:public AbstractCalculator
{
public:
	virtual int getResult()
		//�麯��
	{
		return m_Num1 - m_Num2;
	}
};
//�˷�
class Mul:public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

int main()
{
	AbstractCalculator * abc = new Add;
	abc->m_Num1 = 10;
	abc->m_Num2 = 20;

	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
	
	delete abc;

	return 0;
}