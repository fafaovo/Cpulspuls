#include <iostream>
#include <string>
using namespace std;

//类的声明
class Building;
class GoodGay
{
public:
	GoodGay();
	
	void visit();
	Building* building;
};
class Building
{
	//当加上这行代码时表示GoodGay类是Building的好朋友,可以访问私有成员了
	friend class GoodGay;
public:
	Building();

	string m_sittingroom;
private:
	string m_bedroom;
};

//在外部写构造函数先声明作用域
Building::Building()
{
	m_sittingroom = "客厅";
	m_bedroom = "卧室";
}

GoodGay::GoodGay()
{
	//创建一个建筑物的对象
	building = new Building;

}

void GoodGay::visit()
{
	cout << "好基友正在访问" << building->m_sittingroom << endl;
	cout << "好基友正在访问" << building->m_bedroom << endl;


}

void test01()
{
	GoodGay gg;
	gg.visit();
}

int main()
{
	test01();
	return 0;
}