#include <iostream>
#include <string>
using namespace std;

//菱形继承:有个父类A 
//然后B和C都继承这个父类A 然后D继承B和C
//这种成为菱形继承或者钻石继承
// 
//但是这种行为会导致D继承A时会出现两个分支


//参考如下模型 动物类-羊类和驼类-羊驼
class animal
	//动物
{
public:
	int m_Age;
};

class sleep:public animal{}; //羊类

class camel :public animal{}; //骆驼类

class alpaca :public sleep,public camel{}; 	//羊驼类

class animal1
	//动物
{
public:
	int m_Age;
};
class sleep1 :virtual public animal1 {}; //羊类
class camel1 :virtual public animal1 {}; //骆驼类
class alpaca1 :public sleep1, public camel1 {}; 	//羊驼类

int main()
{
	alpaca st;
	// st.m_Age = 18; 此处编译器并不知道你继承的是那个父类的age
	st.sleep::m_Age = 18;
	st.camel::m_Age = 32;

	cout << "st.sleep::m_age = " << st.sleep::m_Age << endl;
	cout << "st.camel::m_age = " << st.camel::m_Age << endl;

	//菱形继承就导致数据有两份，会浪费
	//所以可以用虚继承来解决问题  
	//在继承类的继承方式前面加上关键字 virtual
	//此时animal类成为 虚基类

	alpaca1 st1;
	st1.sleep1::m_Age = 18;
	st1.camel1::m_Age = 48;

	cout << "st1.sleep::m_age = " << st1.sleep1::m_Age << endl;
	cout << "st1.camel::m_age = " << st1.camel1::m_Age << endl;
	cout << "st1.age = " << st1.m_Age << endl;

	return 0;
}