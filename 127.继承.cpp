#include <iostream>
#include <string>

using namespace std;

//继承:减少重复的代码
class fu
{
public:
	void car()
	{
		cout << "这是一辆车" << endl;
	}
	void host()
	{
		cout << "这是一间房子" << endl;
	}
};

//继承的语法 class 子类:继承方式 父类
class zi :public fu
{
public:
	void newcar()
	{
		cout << "这也是一辆车" << endl;
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
继承关系:
分为公有继承public,保护继承protected,私有继承private
保护权限可以被继承
1.子类三种继承方式都无法继承父类的私有属性
2.子类选择公有继承,继承过来后没有变化
3.子类选择保护继承,父类继承过来的都会变成保护权限
4.子类选择私有继承,父类继承过来的都会变成私有权限

*/