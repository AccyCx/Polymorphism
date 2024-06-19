#pragma once
#include "Employee.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;
class Report
{
public:
	vector <string>name;
	vector <Data>vec; 
	void Insert_Infom(Data& a);
	void Print_Infom();
	string& operator[](string i);
};

