#include <iostream>
#include <string>
using namespace std;

//�������
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
	//���������д���ʱ��ʾGoodGay����Building�ĺ�����,���Է���˽�г�Ա��
	friend class GoodGay;
public:
	Building();

	string m_sittingroom;
private:
	string m_bedroom;
};

//���ⲿд���캯��������������
Building::Building()
{
	m_sittingroom = "����";
	m_bedroom = "����";
}

GoodGay::GoodGay()
{
	//����һ��������Ķ���
	building = new Building;

}

void GoodGay::visit()
{
	cout << "�û������ڷ���" << building->m_sittingroom << endl;
	cout << "�û������ڷ���" << building->m_bedroom << endl;


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