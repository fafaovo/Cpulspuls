#include "workerManager.h"

// WorkerManagr�Ĺ��캯��
WorkerManagr::WorkerManagr()
{
	//��¼�ļ�������
	this->m_EmpNum = 0;
	//Ա�������ָ�� ˳���汾 ���ָ������
	this->m_EmpArray =NULL;
}

//����Ա��
void WorkerManagr::Add_Emp()
{
	cout << "����������ְ��������" << endl;

	int addnum = 0;
	cin >> addnum;
	if (addnum > 0)
	{
		//������Ҫ���ٿռ�Ĵ�С
		int addsize = this->m_EmpNum + addnum;
		//�����µĿռ�
		//����һ�����ָ�������,����������Ҫ�ڶ��Ͽ���
		//һ��Ա���ĳ������ָ��
		Worker** newspace = new Worker*[addsize];
		if (newspace == NULL)
		{
			exit;
		}
		//��������Ķ�����������������
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newspace[i] = this->m_EmpArray[i];
			}
		}
		//����������
		for (int i = 0; i < addnum; i++)
		{
			//��Ϊid����������仯����������ֻ��Ҫ����
			//���ֺͱ�ź�ְλ����
			string name;
			int DeptId;
			int dselect;
			Worker* work;

			cout << "�������" << i << "λԱ��������: " << endl;
			cin >> name;
			cout << "�������" << i << "λԱ���ı��: " << endl;
			cin >> DeptId;
			cout << "�������" << i << "λԱ����ְλ(1.Ա�� 2.���� 3.�ϰ�): " << endl;
			cin >> dselect;
			if (dselect == 1)
			{
				work = new Employee(DeptId,name,1);
			}
			else if (dselect == 2)
			{
				work = new Manager(DeptId, name, 2);
			}
			else 
			{
				work = new boss(DeptId, name, 3);
			}
			newspace[this->m_EmpNum + i] = work;
			
		}
		//�������ͷ�ԭ�ȵ�ַ��ָ�� Ȼ���µ�ַ����
		delete[] this->m_EmpArray;
		this->m_EmpArray = newspace;
		this->m_EmpNum = addsize;
		system("pause");
		system("cls");
	}
	else
	{
		cout << "��������" << endl;
	}
}

//��ʾԱ��
void WorkerManagr::Show_Emp()
{
	if (this->m_EmpNum == 0)
	{
		cout << "�����ݿɴ�ӡ" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			this->m_EmpArray[i]->showInfo();
		}
		system("pause");
		system("cls");
	}
}

//WorkerManagr����������
WorkerManagr::~WorkerManagr()
{

}

//��ʾ�˵�
void WorkerManagr::Show_Menu()
{
	cout << "*********************************" << endl;
	cout << "*****  ��ӭʹ��ְ������ϵͳ  ****" << endl;
	cout << "*******  0.�˳�����ϵͳ  ********" << endl;
	cout << "*******  1.���ְ����Ϣ  ********" << endl;
	cout << "*******  2.��ʾְ����Ϣ  ********" << endl;
	cout << "*******  3.ɾ��ְ����Ϣ  ********" << endl;
	cout << "*******  4.�޸�ְ����Ϣ  ********" << endl;
	cout << "*******  5.����ְ����Ϣ  ********" << endl;
	cout << "*******  6.���ձ������  ********" << endl;
	cout << "*******  7.��������ĵ�  ********" << endl;
	cout << "*********************************" << endl;
}
