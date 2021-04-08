/*
电脑主要部件是CPU [用于计算] 显卡 [用于显示] 内存条 [用于存储]
eg:
设计一个CPU的抽象类 抽象的计算函数
设计一个电脑类传入三个零件的指针
设计一个零件厂商
*/
#include <iostream>
#include <string>

using namespace std;

//三个抽象类
class CPU
{
public:
	//CPU的抽象类
	virtual void Calculation() = 0;
};

class VideoCard
{
public:
	//显卡的抽象类
	virtual void display() = 0;
};

class Memory
{
public:
	//内存的抽象类
	virtual void storage() = 0;
};

//实例化类
class IntelCpu :public CPU
{
	virtual void Calculation()
	{
		cout << "Intel的Cpu开始计算了" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
	virtual void display()
	{
		cout << "Intel的VideoCard开始处理图像了" << endl;
	}
};

class IntelMemory :public Memory
{
	virtual void storage()
	{
		cout << "Intel的Memory正在存储东西" << endl;
	}
};

class NvidaCpu :public CPU
{
	virtual void Calculation()
	{
		cout << "Nvida的Cpu开始计算了" << endl;
	}
};

class NvidaVideoCard :public VideoCard
{
	virtual void display()
	{
		cout << "Nvida的VideoCard开始处理图像了" << endl;
	}
};

class NvidaMemory :public Memory
{
	virtual void storage()
	{
		cout << "Nvida的Memory正在存储东西" << endl;
	}
};

//计算机的类
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
	//提供析构函数释放三个电脑的零件
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
	//实例化计算机
	Computer* computer = new Computer(new IntelCpu, new IntelVideoCard, new IntelMemory);
	computer->Work();
	//释放计算机
	delete computer;
	
}

int main()
{
	test04();
	return 0;
}