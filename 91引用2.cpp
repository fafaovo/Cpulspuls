#include <iostream>
using namespace std;

int main11() 
{
	int a = 10;
	int& ref = a;
	//�ᱻ������ת����int* const ref = &a; 
	ref = 20;
	//������ref������ʱ,�ᱻ������ת����*ref = 20;
	//���õı��ʾ���һ��ָ�볣��
	return 0;
}

void showValue(const int& b)
{
	cout << b << endl;
}


int main()
{
	//��������:���������вΣ���ֹ�����
	int a = 10;
	//���Ƕ�֪�����ñ�������һ��Ϸ����ڴ�ռ䣬������int& ref = 10;�ᱨ��
	const int& ref = 10; 
	//����������ģ�
	//������������ø�����=10��Ȼ��������

	//��ȷ�÷�,��������Ҫ��ӡһ��ֵ,���ǲ������޸�ʱ
	int c = 10;
	int& b = c;

	showValue(b);
	return 0;
}