#include <iostream>
#include <string>
using namespace std;

/*
函数重载和运算符重载属于静态多态
派生类和虚函数实现运行时多态是动态动态

两者的区别,
静态多态的函数地址早绑定，编译阶段确定函数地址
动态多态的函数地址晚绑定，运行阶段确定函数地址

动态多态满足条件
1.有继承关系
2.子类要重写父类的虚函数

动态多态的使用
父类的指针或者引用 执行子类的对象
*/

class Animal
{
public:
	//在此处添加virtual 即可实现虚函数晚绑定
	//virtual会让这个类从一个字节变成四个字节
	//这四个字节是个指针
	virtual void speak()
	{
		cout << "动物在叫" << endl;
	}
};

//猫类 派生类
class Cat :public Animal
{
public:
	void speak()
	{
		cout << "小猫在叫" << endl;
	}
};

//执行说话函数
//这种方式是地址早绑定，在编译阶段已经确认地址
//所以会输出动物说话
//如果想让猫说话，纳米这个函数地址就不能提前绑定，需要晚绑定
void doSpeak(Animal& animal)   // Animal & animal = cat;
{
	animal.speak();
}
//在C++中允许父子之间的类型转换

int main()
{
	Cat cat;
	doSpeak(cat);
	return 0;
}