/*
头文件 fstream

ofstream 写操作
ifstream 读操作
fstream  读写操作

打开方式
ios::in 为读打开
ios::out 为写打开
ios::ate 初始化位置尾
ios::app 追加
ios::trunc 有文件则删除，再创建
ios::binary 二进制方式
如果需求两个用 | 分割
*/
#include <iostream>
using namespace std;
#include <fstream>
#include <string>


int main1()
{
	//1.创建流对象 ofs流对象
	ofstream ofs;
	//2.指定打开方式 流对象.open(路径,打开方式)
	ofs.open("test.txt", ios::out);
	//3.写内容
	ofs << "名字:张三" << endl;
	ofs << "性别:男" << endl;
	ofs << "年龄:18" << endl;
	//4.关闭
	ofs.close();

	system("pause");
	return 0;
}

int main2()
{
	//1.创建流对象
	ifstream ifs;
	//2.打开文件 判断是否打开成功 流对象.is_open() 打开成功返回true
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return 0;
	}
	//3.读数据
	//第一种方式
	/*
	char buf[1024] = { 0 };
	while (ifs >> buf) {
		cout << buf << endl;
	}
	*/
	//第二种方式 读取一行(首元素地址 ,读取的字节数)
	/*
	char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}
	*/
	//第三种方式
	string buf;
	while (getline(ifs,buf))
	{
		cout << buf << endl;
	}
	//第四种 不推荐 一个一个读取
	/*
	char c;
	while ((c=ifs.get())!= EOF)
	{
		cout << c;
	}
	*/
	//4.关闭文件
	ifs.close();

	system("pause");
	return 0;
}