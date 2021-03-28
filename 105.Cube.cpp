#include <iostream>
#include <string>
using namespace std;


class Cube
{
public:
	void init(int height,int width,int line)
	{
		m_height = height;
		m_width = width;
		m_line = line;
	}
	void str()
	{
		cout << "矩形的三围分别是" << endl;
		cout << "height:" << m_height << endl;
		cout << "width:" << m_width << endl;
		cout << "line:" << m_line << endl;
	}
	int geth()
	{
		return m_height;
	}
	int getw()
	{
		return m_width;
	}
	int getl ()
	{
		return m_line;
	}
	int Perimeter()
	{
		int Perimeter = (m_height * m_width + m_width * m_line + m_height * m_line)*2;
		return Perimeter;
	}
	int volume()
	{
		int volume = m_height * m_width * m_line;
		return volume;
	}
	//利用成员函数是否相等
	bool isSameBuyClass(Cube& C2)
		//在成员函数内本身可以调用本身,所以说只需要传入比较的对象
	{
		if (m_height == C2.geth() && m_line == C2.getl() && m_width == C2.getw())
		{
			return true;
		}
		else 
		{
			return false;
		}
	}

private:
	//私有定义长宽高
	int m_height;
	int m_width;
	int m_line;
};

//利用全局函数判断两个函数是否相等
bool isSame(Cube &c1, Cube &c2)
{
	if ((c1.geth() == c2.geth() && c1.getw() == c2.getw()) && c1.getl() == c2.getl())
		return true;
	else
		return false;
}

int mainCube()
{
	Cube C1;
	C1.init(10, 10, 10);
	C1.str();
	cout << "面积是" << C1.Perimeter() << endl;
	cout << "体积是:" << C1.volume() << endl;

	Cube C2;
	C2.init(10, 10, 10);

	//bool ret = isSame(C1, C2);
	bool ret = C1.isSameBuyClass(C2);
	if (ret)
		cout << "两个立方体相等" << endl;
	else
		cout << "两个立方体不相等" << endl;

	
	return 0;
}