#include "manager.h"

//����
Manager::Manager(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_DeptId = did;
}
//������Ϣ
void Manager::showInfo()
{
	cout << "Ա����� :" << this->m_id << "\t";
	cout << "Ա������ :" << this->m_name << "\t";
	cout << "Ա����λ :" << this->getDeptName() << "\t";
	cout << "��λְ�� :����ϰ彻��������,���·������Ա��" << endl;

}
//��ȡ�����λ����;
string Manager::getDeptName()
{
	return string("����");
}