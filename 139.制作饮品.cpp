#include <iostream>
#include <string>

using namespace std;

//制作饮品
class AbstractDrinking
{
public:
	//煮水
	virtual void Boil() = 0;

	//冲泡
	virtual void Brew() = 0;

	//倒入杯中
	virtual void PourInCup() = 0;

	//加入辅料
	virtual void PutSomething() = 0;

	//制作饮品
	void makerDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

class Coffee :public AbstractDrinking
{
	//煮水
	virtual void Boil()
	{
		cout << "煮水" << endl;
	}

	//冲泡
	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}

	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}

	//加入辅料
	virtual void PutSomething()
	{
		cout << "加入糖和牛奶" << endl;
	}
};

class Tea :public AbstractDrinking
{
	//煮水
	virtual void Boil()
	{
		cout << "煮矿泉水" << endl;
	}

	//冲泡
	virtual void Brew()
	{
		cout << "冲泡茶叶" << endl;
	}

	//倒入杯中
	virtual void PourInCup()
	{
		cout << "倒入杯中" << endl;
	}

	//加入辅料
	virtual void PutSomething()
	{
		cout << "加入枸杞" << endl;
	}
};

void doWork(AbstractDrinking* abs)
{
	abs->makerDrink();
	delete abs;
	abs = NULL;
}

void test01()
{
	doWork(new Coffee);
	cout << "-------" << endl;
	doWork(new Tea);
}

int main2()
{
	test01();
	return 0;
}