#include <iostream>
#include <stdlib.h>
using namespace std;

int main1() 
{
	int* p = new int(10);
	//�ڶ�������һ��int�����͵��ڴ�,���Ҹ�ֵΪ10
	int* Parr = new int[10];
	//��������

	int* pr = (int*)malloc(sizeof(int));
	if (pr == NULL)
	{
		exit(-1);
	}
	*pr = 10;
	//malloc���ٿռ�,���ҽ��и�ֵ
	cout << *pr << endl;
	cout << *p << endl;

	free(pr);
	pr = NULL;
	//�ͷ�malloc���ٵĿռ�

	delete p;
	//�ͷ�new���ٵĿռ�

	delete[] Parr;
	//�ͷ�����

	system("pause");
	return 0;
}
