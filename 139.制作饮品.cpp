#include <iostream>
#include <string>

using namespace std;

//������Ʒ
class AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil() = 0;

	//����
	virtual void Brew() = 0;

	//���뱭��
	virtual void PourInCup() = 0;

	//���븨��
	virtual void PutSomething() = 0;

	//������Ʒ
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
	//��ˮ
	virtual void Boil()
	{
		cout << "��ˮ" << endl;
	}

	//����
	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}

	//���븨��
	virtual void PutSomething()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}
};

class Tea :public AbstractDrinking
{
	//��ˮ
	virtual void Boil()
	{
		cout << "���Ȫˮ" << endl;
	}

	//����
	virtual void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}

	//���뱭��
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}

	//���븨��
	virtual void PutSomething()
	{
		cout << "�������" << endl;
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