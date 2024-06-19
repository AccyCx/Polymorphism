#include "Employee.h"
void Employee::inputdata(Data& a) {
	cout << "Input" << endl << "ID:";
	cin >> ID ;
	a.ID = ID;
	cout << "Gender:";
	cin >> gender;
	a.gender = gender;
	cout << "Name:";
	cin >> name;
	a.name = name;
	cout << "Enroll Date:";
	cin >> enrolldate;
	a.enrolldate = enrolldate;
	
};
ostream& operator<<(ostream& out, Employee& a) {
	out << "name:" << a.name << endl << "ID:" << a.ID << endl << "gender:" << a.gender << endl << "position:" << a.position << endl << "enroll date:" << a.enrolldate << endl << "salary:" << a.salary << endl;
	return out;
};