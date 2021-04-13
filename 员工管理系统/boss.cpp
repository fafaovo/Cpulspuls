#include "boss.h"

boss::boss(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_DeptId = did;
}
//个人信息
void boss::showInfo()
{
	cout << "员工编号:" << this->m_id << "\t";
	cout << "员工名字:" << this->m_name << "\t";
	cout << "员工岗位:" << this->getDeptName() << "\t";
	cout << "岗位职责:管理公司事务" << endl;

}
//获取职工岗位名称;
string boss::getDeptName()
{
	return string("老板");
}