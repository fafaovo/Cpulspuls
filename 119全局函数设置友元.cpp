//#include <iostream>
//#include <string>
//using namespace std;
//
//
//class Building
//{
//	friend void God(Building& p);
//	//1.������������Ԫ,�˴�Ϊȫ�ֺ�������Ԫ
//public:
//	Building()
//	{
//		m_keting = "����";
//		m_woshi = "����";
//	}
//public:
//	string m_keting;
//private:
//	string m_woshi;
//};
//
//void God(Building &p)
//{
//	cout << "���ڷ���" << p.m_keting << endl;
//	//2.��ʱ���ܷ���˽�б���
//	cout << "���ڷ���" << p.m_woshi << endl << "���ҿ���" << endl;
//}
//
//int main()
//{
//	Building room;
//	God(room);
//	return 0;
//}