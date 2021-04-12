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
			break;
		case MODIFY:   //修改
			break;
		case SEEK:   //查找
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
	WorkerManagr WM;
	
}

int main()
{
	test02();



	system("pause");
	return 0;
}