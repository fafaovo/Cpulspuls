#include <iostream>
#include <string>

using namespace std;

class Person3
{
public:
	Person3(int age)
	{
		m_age = new int(age);
	}
	//开辟到堆区的数据
	~Person3()
	{
		if (m_age != NULL)
		{

			delete m_age;
			m_age = NULL;
		}
	}
	//重载赋值运算符
	Person3& operator=(Person3& p)
	{
		//假设this这个m_age有属性在堆区，直接释放在进行深拷贝
		//如果直接覆盖了之前在堆区的东西就无法复用了
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		this->m_age = new int(*p.m_age);
		//为了实现链式思维，所以返回自身
		return *this;
	}
	int* m_age;
};

void test01()
{
	Person3 s1(18);

	Person3 s2(20);

	Person3 s3(30);

	s1 = s2 = s3;

	//赋值操作 但是编译器自带的释放时会释放同一块m_age的空间
	//这种浅拷贝,会导致程序崩溃,所以我们需要重构赋值运算符

	cout << "s1的age:" << *s1.m_age << endl;

	cout << "s2的age:" << *s2.m_age << endl;
	
	cout << "s3的age:" << *s3.m_age << endl;

}

int main4()
{
	test01();
	return 0;
}