#include "employee.h"

Employee::Employee(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_DeptId = did;
}
//������Ϣ
void Employee::showInfo()
{
	cout << "Ա�����:" << this->m_id << "\t";
	cout << "Ա������:" << this->m_name << "\t";
	cout << "Ա����λ:" << this->getDeptName() << "\t";
	cout << "��λְ��:��ɾ�������������" << endl;
	
}
//��ȡְ����λ����;
string Employee::getDeptName()
{
	return string("Ա��");
}