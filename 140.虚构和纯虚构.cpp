#include <iostream>
#include <string>

using namespace std;

//父类指针在析构的时候，不会调用子类中的析构函数，
//导致子类如果有堆区属性，不会释放、

class Animal
{
public:
	Animal()
	{
		cout << "Animal构造函数调用" << endl;
	}
	/*
	虚析构
	virtual ~Animal()
	{
		cout << "Animal析构函数调用" << endl;
	}
	*/
	//纯虚析构 但是使用纯虚析构还是需要函数体
	//因为有可能父类也有一些属性开辟到堆区
	virtual ~Animal() = 0;


	//纯虚构函数
	virtual void Speak() = 0;
};

Animal::~Animal(){} //纯虚析构的函数体

class Cat:public Animal
{
public:
	Cat(string a)
	{
		cout << "cat构造函数调用" << endl;
		cat = new string(a);
	}

	~Cat()
	{
		cout << "cat析构函数调用" << endl;
		if (cat != NULL)
		{
			delete this->cat;
			this->cat = NULL;
		}
	}

	virtual void Speak()
	{
		cout << *cat << "小猫在说话" << endl;
	}
	string* cat;
};



void test02()
{
	Animal* animal = new Cat("Tom");
	animal->Speak();
	delete animal;
	//这里我们可以发现猫的析构函数并没有被调用
	//所以我们需要把动物的析构函数变为虚析构加上virtual关键字
}

int main3()
{
	test02();

	return 0;
}

/*
总结:
	1.虚析构和纯虚析构就是来通过父类指针释放子类对象
	2.如果子类中没有堆区数据，可以不写虚析构和纯虚析构
	3.拥有虚析构和纯虚析构的类也属于抽象类
*/