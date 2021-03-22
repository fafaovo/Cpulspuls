#include "head.h"

//��ʼ��
void InitContact(stuContact* ps)
{
	ps->size = 0;
}

//���
void AddContact(stuContact* ps) 
{
	assert(ps);
	if (ps->size == STUMAX)
	{
		cout << "ͨѶ¼����" << endl;
		return;
	}
	else
	{
		cout << "����������" << endl;
		cin >> ps->add[ps->size].name;

		cout << "�������Ա�:\n1-- �� \n2-- Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2) {
				ps->add[ps->size].sex = sex;
				break;
			}
		}

		cout << "����������" << endl;
		cin >> ps->add[ps->size].age;

		cout << "������绰" << endl;
		cin >> ps->add[ps->size].phone;

		cout << "������סַ" << endl;
		cin >> ps->add[ps->size].address;
		
		ps->size++;

		cout << "��ӳɹ�" << endl;

		system("pause");
		system("cls"); //����
	}
}

//��ʾ
void ShowContact(stuContact* ps)
{
	if (ps->size == 0)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
		return;
	}
	for (int i = 0; i < ps->size; i++)
	{
		cout <<"������ " << ps->add[i].name << "\t";
		if (ps->add[i].sex == 1)
		{
			cout << "�Ա� " << "��" << "\t";
		}
		else
		{
			cout << "�Ա� " << "Ů" << "\t";
		}	
		cout << "���䣺 " << ps->add[i].age << "\t";
		cout << "�绰�� " << ps->add[i].phone << "\t";
		cout << "��ַ�� " << ps->add[i].address  << endl;
	}
	system("pause");
	system("cls");
}

//���ҵ���
int FindByname(stuContact* ps, string name)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->add[i].name == name)
		{
			return i;
		}
	 }
	return -1; 
}

//ɾ��
void delContact(stuContact* ps)
{
	cout << "������Ҫɾ��������: " << endl;
	string name;
	cin >> name;
	int pos = FindByname(ps, name);
	if (pos == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		for (int i = pos; i < ps->size; i++)
		{
			ps->add[i] = ps->add[i + 1];
		}
		ps->size--;
		cout << "ɾ���ɹ�" << endl;
	}
	system("pause");
	system("cls");
}

//����
void SeekContact(stuContact* ps)
{
	cout << "������Ҫ���ҵ�����: " << endl;
	string name;
	cin >> name;
	int pos = FindByname(ps, name);
	if (pos == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		cout << "������ " << ps->add[pos].name << "\t";
		if (ps->add[pos].sex == 1)
		{
			cout << "�Ա� " << "��" << "\t";
		}
		else
		{
			cout << "�Ա� " << "Ů" << "\t";
		}
		cout << "���䣺 " << ps->add[pos].age << "\t";
		cout << "�绰�� " << ps->add[pos].phone << "\t";
		cout << "��ַ�� " << ps->add[pos].address << endl;
	}
	system("pause");
	system("cls");
}

//�޸�
void ModifyContact(stuContact* ps)
{
	cout << "������Ҫ�޸ĵ�����: " << endl;
	string name;
	cin >> name;
	int pos = FindByname(ps, name);
	if (pos == -1)
	{
		cout << "���޴���" << endl;
	}
	else
	{
		cout << "�������µ�����" << endl;
		cin >> ps->add[pos].name;

		cout << "�������µ��Ա�:\n1-- �� \n2-- Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2) {
				ps->add[ps->size].sex = sex;
				break;
			}
		}

		cout << "�������µ�����" << endl;
		cin >> ps->add[ps->size].age;

		cout << "�������µĵ绰" << endl;
		cin >> ps->add[ps->size].phone;

		cout << "�������µ�סַ" << endl;
		cin >> ps->add[ps->size].address;

		cout << "�޸ĳɹ�" << endl;
	}
	system("pause");
	system("cls");
}

//���
void RemoveContact(stuContact* ps)
{
	ps->size = 0;
	cout << "�����" << endl;
	system("pause");
	system("cls");
}


