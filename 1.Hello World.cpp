#include <iostream>
using namespace std;

#define DAY 7

int main()
{
	cout << "hello wolrd" << endl;
	cout << "hello C++" << endl;

	char *str = "这是一段字符";
	cout << str << endl;

	int a = 10;
	cout << "a = " << a << endl;

	cout << "一周有" << DAY << "天" << endl;

	// 0 的ASCII码值是32
	// a 的ASCII码值是97
	// A 的ASCII码值是65

	//C语言基础的建议直接从p72开始（也可以看一下p2和p11）

	system("pause");
	return 0;
}