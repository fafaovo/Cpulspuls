#include "boss.h"

boss::boss(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_DeptId = did;
}
//������Ϣ
void boss::showInfo()
{
	cout << "Ա�����:" << this->m_id << "\t";
	cout << "Ա������:" << this->m_name << "\t";
	cout << "Ա����λ:" << this->getDeptName() << "\t";
	cout << "��λְ��:����˾����" << endl;

}
//��ȡְ����λ����;
string boss::getDeptName()
{
	return string("�ϰ�");
}