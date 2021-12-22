#pragma once
#include<iostream>
#include<fstream>
using namespace std;
#include<map>
#include<string>
#include"globalFile.h"

class OrderFile {
public:
	//构造函数
	OrderFile();
	//更新预约信息
	void updateOrder();

	//记录所有预约信息的容器 key----记录的条数 value-----具体记录的键值对信息
	map<int, map<string, string>>m_orderData;
	//预约记录条数
	int m_Size;
};