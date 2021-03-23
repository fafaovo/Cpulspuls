#include <iostream>
#include <stdlib.h>
using namespace std;

int main1() 
{
	int* p = new int(10);
	//在堆区开辟一块int的类型的内存,并且赋值为10
	int* Parr = new int[10];
	//开辟数组

	int* pr = (int*)malloc(sizeof(int));
	if (pr == NULL)
	{
		exit(-1);
	}
	*pr = 10;
	//malloc开辟空间,并且进行赋值
	cout << *pr << endl;
	cout << *p << endl;

	free(pr);
	pr = NULL;
	//释放malloc开辟的空间

	delete p;
	//释放new开辟的空间

	delete[] Parr;
	//释放数组

	system("pause");
	return 0;
}
