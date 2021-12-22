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
//ѧ���ࣨ�̳���ݵĳ����ࣩ
class Student : public Identity {
public:
	//Ĭ�Ϲ���
	Student();
	//�вι��죨ѧ�ţ� ������ ���룩
	Student(int id, string name, string pwd);
	//�˵�����
	virtual void operMenu();
	//����ԤԼ
	void applyOrder();
	//�鿴����ԤԼ
	void showMyOrder();
	//�鿴����ԤԼ
	void showAllOrder();
	//ȡ��ԤԼ
	void cancelOrder();

	//��������
	vector<ComputerRoom> vCom;
	//ѧ��ѧ��
	int m_Id;
};