#include <iostream>
#include <string>

using namespace std;

//�ڸ���Ǿ�̬�ĳ�Ա���Զ��ᱻ����̳���ȥ
//������˽�г�Ա����,�Ǳ�������������,��˷��ʲ���,����ȷʵ���̳���

class fu2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class son2 :public fu2
{
public:
	int m_D;
};

int main3()
{
	son2 a;
	cout << sizeof(a) << endl;
	return 0;
}

//�ڿ�����Ա������ʾ����[����->vs2019->������ʾ��]
//��������ǰ�ļ���
//���� cl /d1 reportSingleClassLayout ���� Դ�ļ���
//�˴���d���ֵ�1
