#include "workerManager.h"

void test01()
{
	WorkerManagr WM;
	int input = 1;
	while (input)
	{
		WM.Show_Menu();
		cout << "请选择:>" << endl;
		cin >> input;
		switch (input)
		{
		case EXIT:   //退出
			break;
		case ADD:   //添加
			WM.Add_Emp();
			break;
		case SHOW:   //显示
			WM.Show_Emp();
			break;
		case DEL:   //删除
			cout << "请输入你要删除员工的编号" << endl;
			WM.Del_Emp();
			break;
		case MODIFY:   //修改
			cout << "请输入你要修改员工的编号" << endl;
			WM.Modify_Emp();
			break;
		case SEEK:   //查找
			cout << "请输入你要查找员工的编号" << endl;
			WM.Seek_Emp();
			break;
		case SORT:   //排序
			break;
		case REMOVE:   //清空
			break;
		default:
			break;
		}
	}
	/*
		EXIT = 0,
		ADD = 1,
		SHOW = 2,
		DEL = 3,
		MODIFY = 4,
		SEEK = 5,
		SORT = 6,
		REMOVE = 7
	*/
}

void test02()
{
	int i = 0;
	string str = "第" + to_string(i) + "位";
	cout << str << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}