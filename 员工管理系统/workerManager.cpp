#include "workerManager.h"

// WorkerManagr�Ĺ��캯��
WorkerManagr::WorkerManagr()
{	
	//�ļ�������
	ifstream ifs;
	ifs.open(FILENAME, ios::in); // ���ļ�

	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
		//��¼�ļ�������
		this->m_EmpNum = 0;
		//Ա�������ָ�� ˳���汾 ���ָ������
		this->m_EmpArray = NULL;
		//��ʼ���ļ��Ƿ�Ϊ��
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//�ļ�Ϊ��
	else
	{
		//�����ļ�ʱ�����ж��ļ��Ƿ�Ϊ��
		//�ȶ���һ���ַ�������ǿ��ļ���
		//��ô��ȡ�ͻ�õ�һ��EOF
		char ch;
		ifs >> ch;
		if (ifs.eof())
		{
			cout << "�ļ�Ϊ��" << endl;
			this->m_EmpNum = 0;
			this->m_EmpArray = NULL;
			this->m_FileIsEmpty = true;
			ifs.close();
			return;
		}
		//������
		else
		{
			ifs.close();
			ifstream ifs;
			ifs.open(FILENAME, ios::in);

			int num = this->get_Num();
			int id;
			string name;
			int did;
			int index = 0;
			
			cout << "ְ������Ϊ" << num << endl;
			this->m_EmpNum = num;
			//���ٿռ�
			Worker** oldwork = new Worker*[num];
			while (ifs >> id && ifs >> name && ifs >> did)
			{
				Worker * work = NULL;
				if (did == 1)
				{
					work = new Employee(id, name, 1);
				}
				else if (did == 2)
				{
					work = new Manager(id, name, 2);
				}
				else
				{
					work = new boss(id, name, 3);
				}
				oldwork[index] = work;
				index++;
			}
			this->m_EmpArray = oldwork;
			ifs.close();
		}
	}
}

//ͳ������
int WorkerManagr::get_Num()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);	

	int id;
	string name;
	int did;
	int num = 0;

	while (ifs >> id && ifs >> name && ifs >> did)
	{
		num++;
	}
	return num;
}

//��ӵ���Ա��
Worker* Add(string i)
{
	//��Ϊid����������仯����������ֻ��Ҫ����
	//���ֺͱ�ź�ְλ����	
	string name;
	int DeptId;
	int dselect;
	Worker* work;

	cout << "������" << i << "Ա��������: " << endl;
	cin >> name;
	cout << "������" << i << "Ա���ı��: " << endl;
	cin >> DeptId;
	cout << "������" << i << "Ա����ְλ(1.Ա�� 2.���� 3.�ϰ�): " << endl;
	cin >> dselect;
	if (dselect == 1)
	{
		work = new Employee(DeptId, name, 1);
	}
	else if (dselect == 2)
	{
		work = new Manager(DeptId, name, 2);
	}
	else
	{
		work = new boss(DeptId, name, 3);
	}
	return work;
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
			string str = "��" + to_string(i) + "λ";
			newspace[this->m_EmpNum + i] = Add(str);		
		}
		//�������ͷ�ԭ�ȵ�ַ��ָ�� Ȼ���µ�ַ����
		delete[] this->m_EmpArray;
		this->m_EmpArray = newspace;
		this->m_EmpNum = addsize;
		this->save_Emp();
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
	}
	system("pause");
	system("cls");
}

//����Ա��
void WorkerManagr::save_Emp()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_id << " "
			<< this->m_EmpArray[i]->m_name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}
	ofs.close();
}

//����
int WorkerManagr::IsExint_Emp()
{
	int exint = 0;
	cin >> exint;
	if (exit >= 0)
	{
		for (int i = 0; i < this->m_EmpNum; i++)
		{
			if (this->m_EmpArray[i]->m_id == exint)
			{
				return i;
			}
		}
		cout << "û���ҵ���id��Ա��" << endl;
		return -1;
	}
	else
	{
		return -1;
	}
	
}

//����Ա��
void WorkerManagr::Seek_Emp()
{
	if (this->m_EmpNum == 0)
	{
		cout << "û�пɲ��ҵ�����";
	}
	else 
	{
		int num = this->IsExint_Emp();
		if (num != -1)
		{
			this->m_EmpArray[num]->showInfo();
		}
	}
	system("pause");
	system("cls");
	
}

//ɾ��Ա��
void WorkerManagr::Del_Emp()
{
	if (this->m_EmpNum == 0)
	{
		cout << "û�п�ɾ��������";
	}
	else
	{
		int num = this->IsExint_Emp();
		if (num != -1)
		{
			for (int i = num; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;
			this->save_Emp();
			cout << "ɾ���ɹ�" << endl;
		}		
	}
	system("pause");
	system("cls");
}

//�޸�Ա��
void WorkerManagr::Modify_Emp()
{
	if (this->m_EmpNum == 0)
	{
		cout << "û�п�ɾ��������";
	}
	else
	{
		int num = this->IsExint_Emp();
		if (num != -1)
		{
			//��ɾ��
			delete this->m_EmpArray[num];

			this->m_EmpArray[num] = Add("��");
			this->save_Emp();
			cout << "�޸ĳɹ�" << endl;
		}
	}
	system("pause");
	system("cls");
}

//WorkerManagr����������
WorkerManagr::~WorkerManagr()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
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
