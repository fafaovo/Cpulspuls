#include "workerManager.h"

void test01()
{
	WorkerManagr WM;
	int input = 1;
	while (input)
	{
		WM.Show_Menu();
		cout << "��ѡ��:>" << endl;
		cin >> input;
		switch (input)
		{
		case EXIT:   //�˳�
			break;
		case ADD:   //���
			WM.Add_Emp();
			break;
		case SHOW:   //��ʾ
			WM.Show_Emp();
			break;
		case DEL:   //ɾ��
			break;
		case MODIFY:   //�޸�
			break;
		case SEEK:   //����
			break;
		case SORT:   //����
			break;
		case REMOVE:   //���
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