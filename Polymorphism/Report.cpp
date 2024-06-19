#include "Report.h"
#include "Employee.h"
void Report::Insert_Infom(Data& a) {
	vec.push_back(a);
	name.push_back(a.name);
};
void Report::Print_Infom() {
	vector<Data>::iterator it;
	for (it = vec.begin(); it != vec.end(); it++)
	{
		cout << *it<<endl;
	};
};
string& Report::operator[](string j) {
	for (int i = 0; i < name.size(); i++)
	{
		if (name[i] == j)
		{
			return name[i];
			break;
		};
 }
};