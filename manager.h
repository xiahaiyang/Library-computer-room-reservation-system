#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<algorithm>
#include"Identity.h"
#include"student.h"
#include"teacher.h"
#include "globalFile.h"
#include"computerRoom.h"
using namespace std;
//����Ա��
class Manager : public Identity {
public:
	//Ĭ�Ϲ���
	Manager();
	//�вι��죨����Ա������ ���룩
	Manager(string name, string pwd);
	//�˵�����
	virtual void operMenu();
	//����˺�
	void addPerson();
	//�鿴�˺�
	void showPerson();
	//�鿴������Ϣ
	void showComputer();
	//���ԤԼ��Ϣ
	void cleanFile();
	//��ʼ������
	void initVector();
	//����ظ� ������id, �������ͣ� ����ֵ��true�������ظ� false����û���ظ���
	bool checkRepeat(int id, int type);
	//ѧ������
	vector<Student>vStu;
	//��ʦ����
	vector<Teacher>vTea;
	//��������
	vector<ComputerRoom> vCom;
};