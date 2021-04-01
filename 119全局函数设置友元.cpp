//#include <iostream>
//#include <string>
//using namespace std;
//
//
//class Building
//{
//	friend void God(Building& p);
//	//1.将函数设置友元,此处为全局函数作友元
//public:
//	Building()
//	{
//		m_keting = "客厅";
//		m_woshi = "卧室";
//	}
//public:
//	string m_keting;
//private:
//	string m_woshi;
//};
//
//void God(Building &p)
//{
//	cout << "正在访问" << p.m_keting << endl;
//	//2.此时才能访问私有变量
//	cout << "正在访问" << p.m_woshi << endl << "让我康康" << endl;
//}
//
//int main()
//{
//	Building room;
//	God(room);
//	return 0;
//}