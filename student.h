#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;
#include "Identity.h"
#include "globalFile.h"
#include"computerRoom.h"
#include"orderFile.h"
//学生类（继承身份的抽象类）
class Student : public Identity {
public:
	//默认构造
	Student();
	//有参构造（学号， 姓名， 密码）
	Student(int id, string name, string pwd);
	//菜单界面
	virtual void operMenu();
	//申请预约
	void applyOrder();
	//查看自身预约
	void showMyOrder();
	//查看所有预约
	void showAllOrder();
	//取消预约
	void cancelOrder();

	//机房容器
	vector<ComputerRoom> vCom;
	//学生学号
	int m_Id;
};