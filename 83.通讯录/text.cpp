#include "head.h"

void showMenu()
{
	cout << "****************************" << endl;
	cout << "*****   1.�����ϵ��   *****" << endl;
	cout << "*****   2.��ʾ��ϵ��   *****" << endl;
	cout << "*****   3.ɾ����ϵ��   *****" << endl;
	cout << "*****   4.������ϵ��   *****" << endl;
	cout << "*****   5.�޸���ϵ��   *****" << endl;
	cout << "*****   6.�����ϵ��   *****" << endl;
	cout << "*****   0.�˳�ͨѶ¼   *****" << endl;
	cout << "****************************" << endl;
}


int main()
{
	stuContact S;
	InitContact(&S);
	int select = 0;
	//�˵�	
	do
	{
		showMenu();
		cout << "��ѡ��:>" << endl;
		cin >> select;
		//cin �û����뺯�� ͬscanf("%d", &select);

		switch (select)
		{
		case add:   //���
			AddContact(&S);
			break;
		case show:  //��ʾ
			ShowContact(&S);
			break;
		case del:   //ɾ��
			delContact(&S);
			break;
		case seek:  //����
			SeekContact(&S);
			break;
		case modify://�޸�
			ModifyContact(&S);
			break;
		case delStu://���
			RemoveContact(&S);
			break;
		case 0:     //�˳�
			break;
		default:
			break;
		}

	} while (select);
	
	

	


	system("pause");
	return 0;
}