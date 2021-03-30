#include <iostream>
using namespace std;

//结论:只有非静态变量属于类的对象上,剩下的都不属于

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
	//C++编译器会给每个空对象分配一个字节空间,为了区分空对象占内存的位置
	//即占着茅坑不拉屎
	cout << "sizeof:" << sizeof(p1) << endl;
	//因为上面这个内存是占着茅坑不拉屎的
	//后续存入按结构体的内存对齐
	cout << "sizeof:" << sizeof(p2) << endl;
	//静态成员变量放在静态区（全局区），所以得到还是4

	return 0;
}