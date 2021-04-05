#include <iostream>
#include <string>

using namespace std;

//在父类非静态的成员属性都会被子类继承下去
//父类中私有成员属性,是被编译器隐藏了,因此访问不到,但是确实被继承了

class fu2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class son2 :public fu2
{
public:
	int m_D;
};

int main3()
{
	son2 a;
	cout << sizeof(a) << endl;
	return 0;
}

//在开发人员命令提示符中[启动->vs2019->命令提示符]
//调整到当前文件夹
//输入 cl /d1 reportSingleClassLayout 类名 源文件名
//此处是d数字的1
