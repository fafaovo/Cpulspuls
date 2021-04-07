#include <iostream>
#include <string>

using namespace std;


//实现计算器抽象类
//多态的好处
//1.组织结构清晰
//2.可读性强
//3.对于前期和后期的扩展以及维护性高
class AbstractCalculator
{
public:
	/*
	virtual int getResult()
	{
		return 0;
	}
	我们发现根本用不到这个函数
	所以可以用纯虚函数代替
	只要有一个纯虚函数，这个类就成为抽象类
	1.无法实例化对象
	2.抽象类的子类必须要重写父类中的纯虚函数
	否则也属于抽象类

	写这个虚函数的目的就是让子类重写父类的函数来实现多态
	
	*/
	virtual int getResult() = 0;
	int m_Num1;
	int m_Num2; 
};

//设置加法计算器的类
class Add:public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_Num1 + m_Num2;
	}
};
//减法
class Sub:public AbstractCalculator
{
public:
	virtual int getResult()
		//虚函数
	{
		return m_Num1 - m_Num2;
	}
};
//乘法
class Mul:public AbstractCalculator
{
public:
	virtual int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

int main()
{
	AbstractCalculator * abc = new Add;
	abc->m_Num1 = 10;
	abc->m_Num2 = 20;

	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
	
	delete abc;

	return 0;
}