#include <iostream>
#include <string>

using namespace std;

//����ָ����������ʱ�򣬲�����������е�����������
//������������ж������ԣ������ͷš�

class Animal
{
public:
	Animal()
	{
		cout << "Animal���캯������" << endl;
	}
	/*
	������
	virtual ~Animal()
	{
		cout << "Animal������������" << endl;
	}
	*/
	//�������� ����ʹ�ô�������������Ҫ������
	//��Ϊ�п��ܸ���Ҳ��һЩ���Կ��ٵ�����
	virtual ~Animal() = 0;


	//���鹹����
	virtual void Speak() = 0;
};

Animal::~Animal(){} //���������ĺ�����

class Cat:public Animal
{
public:
	Cat(string a)
	{
		cout << "cat���캯������" << endl;
		cat = new string(a);
	}

	~Cat()
	{
		cout << "cat������������" << endl;
		if (cat != NULL)
		{
			delete this->cat;
			this->cat = NULL;
		}
	}

	virtual void Speak()
	{
		cout << *cat << "Сè��˵��" << endl;
	}
	string* cat;
};



void test02()
{
	Animal* animal = new Cat("Tom");
	animal->Speak();
	delete animal;
	//�������ǿ��Է���è������������û�б�����
	//����������Ҫ�Ѷ��������������Ϊ����������virtual�ؼ���
}

int main3()
{
	test02();

	return 0;
}

/*
�ܽ�:
	1.�������ʹ�������������ͨ������ָ���ͷ��������
	2.���������û�ж������ݣ����Բ�д�������ʹ�������
	3.ӵ���������ʹ�����������Ҳ���ڳ�����
*/