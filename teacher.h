#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Identity.h"
#include"globalFile.h"
#include"orderFile.h"
using namespace std;
//��ʦ��
class Teacher : public Identity {
public:
	//Ĭ�Ϲ���
	Teacher();
	//�вι��죨ְ����ţ� ������ ���룩
	Teacher(int empId, string name, string pwd);
	//�˵�����
	virtual void operMenu();
	//�鿴����ԤԼ
	void showAllOrder();
	//���ԤԼ
	void validOrder();

	//��ʦ�˵�
	void TeacherMenu(Identity*& teacher);

	int m_EmpId; //��ʦ���
};

