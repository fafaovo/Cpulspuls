#include "manager.h"

//构造
Manager::Manager(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_DeptId = did;
}
//个人信息
void Manager::showInfo()
{
	cout << "员工编号 :" << this->m_id << "\t";
	cout << "员工名字 :" << this->m_name << "\t";
	cout << "员工岗位 :" << this->getDeptName() << "\t";
	cout << "岗位职责 :完成老板交给的任务,并下发任务给员工" << endl;

}
//获取经理岗位名称;
string Manager::getDeptName()
{
	return string("经理");
}