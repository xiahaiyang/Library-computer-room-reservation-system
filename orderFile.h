#pragma once
#include<iostream>
#include<fstream>
using namespace std;
#include<map>
#include<string>
#include"globalFile.h"

class OrderFile {
public:
	//���캯��
	OrderFile();
	//����ԤԼ��Ϣ
	void updateOrder();

	//��¼����ԤԼ��Ϣ������ key----��¼������ value-----�����¼�ļ�ֵ����Ϣ
	map<int, map<string, string>>m_orderData;
	//ԤԼ��¼����
	int m_Size;
};