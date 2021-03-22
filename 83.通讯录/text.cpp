#include "head.h"

void showMenu()
{
	cout << "****************************" << endl;
	cout << "*****   1.添加联系人   *****" << endl;
	cout << "*****   2.显示联系人   *****" << endl;
	cout << "*****   3.删除联系人   *****" << endl;
	cout << "*****   4.查找联系人   *****" << endl;
	cout << "*****   5.修改联系人   *****" << endl;
	cout << "*****   6.清空联系人   *****" << endl;
	cout << "*****   0.退出通讯录   *****" << endl;
	cout << "****************************" << endl;
}


int main()
{
	stuContact S;
	InitContact(&S);
	int select = 0;
	//菜单	
	do
	{
		showMenu();
		cout << "请选择:>" << endl;
		cin >> select;
		//cin 用户输入函数 同scanf("%d", &select);

		switch (select)
		{
		case add:   //添加
			AddContact(&S);
			break;
		case show:  //显示
			ShowContact(&S);
			break;
		case del:   //删除
			delContact(&S);
			break;
		case seek:  //查找
			SeekContact(&S);
			break;
		case modify://修改
			ModifyContact(&S);
			break;
		case delStu://清空
			RemoveContact(&S);
			break;
		case 0:     //退出
			break;
		default:
			break;
		}

	} while (select);
	
	

	


	system("pause");
	return 0;
}