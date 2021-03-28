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
		cout << "���ε���Χ�ֱ���" << endl;
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
	//���ó�Ա�����Ƿ����
	bool isSameBuyClass(Cube& C2)
		//�ڳ�Ա�����ڱ�����Ե��ñ���,����˵ֻ��Ҫ����ȽϵĶ���
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
	//˽�ж��峤���
	int m_height;
	int m_width;
	int m_line;
};

//����ȫ�ֺ����ж����������Ƿ����
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
	cout << "�����" << C1.Perimeter() << endl;
	cout << "�����:" << C1.volume() << endl;

	Cube C2;
	C2.init(10, 10, 10);

	//bool ret = isSame(C1, C2);
	bool ret = C1.isSameBuyClass(C2);
	if (ret)
		cout << "�������������" << endl;
	else
		cout << "���������岻���" << endl;

	
	return 0;
}