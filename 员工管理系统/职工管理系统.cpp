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
			cout << "��������Ҫɾ��Ա���ı��" << endl;
			WM.Del_Emp();
			break;
		case MODIFY:   //�޸�
			cout << "��������Ҫ�޸�Ա���ı��" << endl;
			WM.Modify_Emp();
			break;
		case SEEK:   //����
			cout << "��������Ҫ����Ա���ı��" << endl;
			WM.Seek_Emp();
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
	int i = 0;
	string str = "��" + to_string(i) + "λ";
	cout << str << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}