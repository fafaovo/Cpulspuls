#include <iostream>
#include <string>
using namespace std;

//���μ̳�:�и�����A 
//Ȼ��B��C���̳��������A Ȼ��D�̳�B��C
//���ֳ�Ϊ���μ̳л�����ʯ�̳�
// 
//����������Ϊ�ᵼ��D�̳�Aʱ�����������֧


//�ο�����ģ�� ������-���������-����
class animal
	//����
{
public:
	int m_Age;
};

class sleep:public animal{}; //����

class camel :public animal{}; //������

class alpaca :public sleep,public camel{}; 	//������

class animal1
	//����
{
public:
	int m_Age;
};
class sleep1 :virtual public animal1 {}; //����
class camel1 :virtual public animal1 {}; //������
class alpaca1 :public sleep1, public camel1 {}; 	//������

int main()
{
	alpaca st;
	// st.m_Age = 18; �˴�����������֪����̳е����Ǹ������age
	st.sleep::m_Age = 18;
	st.camel::m_Age = 32;

	cout << "st.sleep::m_age = " << st.sleep::m_Age << endl;
	cout << "st.camel::m_age = " << st.camel::m_Age << endl;

	//���μ̳о͵������������ݣ����˷�
	//���Կ�������̳����������  
	//�ڼ̳���ļ̳з�ʽǰ����Ϲؼ��� virtual
	//��ʱanimal���Ϊ �����

	alpaca1 st1;
	st1.sleep1::m_Age = 18;
	st1.camel1::m_Age = 48;

	cout << "st1.sleep::m_age = " << st1.sleep1::m_Age << endl;
	cout << "st1.camel::m_age = " << st1.camel1::m_Age << endl;
	cout << "st1.age = " << st1.m_Age << endl;

	return 0;
}