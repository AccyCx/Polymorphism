#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;
struct Data {
	int ID;
	string gender;
	string name;
	string position;
	string enrolldate;
	double salary;
	friend ostream& operator<<(ostream& out, Data& a)
	{
		out << "name:" << a.name << endl << "ID:" << a.ID << endl << "gender:" << a.gender << endl << "position:" << a.position << endl << "enroll date:" << a.enrolldate << endl<<"payment:"<<a.salary<<endl;
		return out;
	};
};
class Employee
{
public:
	int ID;
	string gender;
	string name;
	string position;
	string enrolldate;
	double salary;
	virtual void get_pay(Data& a) = 0;
	void inputdata(Data& a);
	friend ostream &operator<<(ostream& out, Employee& a);
};

