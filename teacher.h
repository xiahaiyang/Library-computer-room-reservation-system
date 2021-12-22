#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Identity.h"
#include"globalFile.h"
#include"orderFile.h"
using namespace std;
//教师类
class Teacher : public Identity {
public:
	//默认构造
	Teacher();
	//有参构造（职工编号， 姓名， 密码）
	Teacher(int empId, string name, string pwd);
	//菜单界面
	virtual void operMenu();
	//查看所有预约
	void showAllOrder();
	//审核预约
	void validOrder();

	//教师菜单
	void TeacherMenu(Identity*& teacher);

	int m_EmpId; //教师编号
};

