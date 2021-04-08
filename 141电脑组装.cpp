/*
������Ҫ������CPU [���ڼ���] �Կ� [������ʾ] �ڴ��� [���ڴ洢]
eg:
���һ��CPU�ĳ����� ����ļ��㺯��
���һ�������ഫ�����������ָ��
���һ���������
*/
#include <iostream>
#include <string>

using namespace std;

//����������
class CPU
{
public:
	//CPU�ĳ�����
	virtual void Calculation() = 0;
};

class VideoCard
{
public:
	//�Կ��ĳ�����
	virtual void display() = 0;
};

class Memory
{
public:
	//�ڴ�ĳ�����
	virtual void storage() = 0;
};

//ʵ������
class IntelCpu :public CPU
{
	virtual void Calculation()
	{
		cout << "Intel��Cpu��ʼ������" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
	virtual void display()
	{
		cout << "Intel��VideoCard��ʼ����ͼ����" << endl;
	}
};

class IntelMemory :public Memory
{
	virtual void storage()
	{
		cout << "Intel��Memory���ڴ洢����" << endl;
	}
};

class NvidaCpu :public CPU
{
	virtual void Calculation()
	{
		cout << "Nvida��Cpu��ʼ������" << endl;
	}
};

class NvidaVideoCard :public VideoCard
{
	virtual void display()
	{
		cout << "Nvida��VideoCard��ʼ����ͼ����" << endl;
	}
};

class NvidaMemory :public Memory
{
	virtual void storage()
	{
		cout << "Nvida��Memory���ڴ洢����" << endl;
	}
};

//���������
class Computer
{
public:

	Computer(CPU* cpu, VideoCard* videocard, Memory* memory)
	{
		m_cpu = cpu;
		m_videocard = videocard;
		m_memory = memory;
	}

	void Work() 
	{
		m_cpu->Calculation();
		m_videocard->display();
		m_memory->storage();
	}
	//�ṩ���������ͷ��������Ե����
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_videocard != NULL)
		{
			delete m_cpu;
			m_videocard = NULL;
		}
		if (m_memory != NULL)
		{
			delete m_cpu;
			m_memory = NULL;
		}

	}

private:

	CPU* m_cpu; 
	VideoCard* m_videocard; 
	Memory* m_memory;
};

void test04()
{
	//ʵ���������
	Computer* computer = new Computer(new IntelCpu, new IntelVideoCard, new IntelMemory);
	computer->Work();
	//�ͷż����
	delete computer;
	
}

int main()
{
	test04();
	return 0;
}