#include "employee.h"

Employee::Employee(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_DeptId = did;
}
//个人信息
void Employee::showInfo()
{
	cout << "员工编号:" << this->m_id << "\t";
	cout << "员工名字:" << this->m_name << "\t";
	cout << "员工岗位:" << this->getDeptName() << "\t";
	cout << "岗位职责:完成经历交给的任务" << endl;
	
}
//获取职工岗位名称;
string Employee::getDeptName()
{
	return string("员工");
}