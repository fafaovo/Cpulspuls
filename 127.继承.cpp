#include <iostream>
#include <string>

using namespace std;

//�̳�:�����ظ��Ĵ���
class fu
{
public:
	void car()
	{
		cout << "����һ����" << endl;
	}
	void host()
	{
		cout << "����һ�䷿��" << endl;
	}
};

//�̳е��﷨ class ����:�̳з�ʽ ����
class zi :public fu
{
public:
	void newcar()
	{
		cout << "��Ҳ��һ����" << endl;
	}
};

int main1()
{
	fu a;
	zi b;
	a.car();
	b.host();
	b.car();
	b.host();
	b.newcar();

	return 0;
}
/*
�̳й�ϵ:
��Ϊ���м̳�public,�����̳�protected,˽�м̳�private
����Ȩ�޿��Ա��̳�
1.�������ּ̳з�ʽ���޷��̳и����˽������
2.����ѡ���м̳�,�̳й�����û�б仯
3.����ѡ�񱣻��̳�,����̳й����Ķ����ɱ���Ȩ��
4.����ѡ��˽�м̳�,����̳й����Ķ�����˽��Ȩ��

*/