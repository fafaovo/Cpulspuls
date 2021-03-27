#include <iostream>
#include <string>
using namespace std;

//三种访问权限
//公共权限 public 都可以访问
//保护权限 protected 类内可以访问 类外不可以 儿子可以访问父亲的隐私
//私有权限 private 类内可以访问 类外不可以 儿子不可以访问父亲的隐私
// class 默认权限是私有 struct 默认权限是公共

class Person
{
	//公共
public:
	string m_name; //名字
protected:
	string m_car; //汽车
private:
	int m_passworld; //银行卡密码

public:
	void func()
	{
		m_name = "zhangsan";
		m_car = "拖拉机";
		m_passworld = 123456;
	}
	//这些都是类内访问，所以不会报错
};

int main()
{
	Person p1;
	p1.m_name = "李四";
	// p1.m_cat = "宝马" 保护权限内容,在类外访问不到


	return 0;
}