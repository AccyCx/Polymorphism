#include <iostream>
#include <vector>
#include "Salesperson.h"
#include "Manager.h"
#include "Technician.h"
#include "Report.h"
using namespace std;
int main() 
{
	Manager m;
	Salesperson s;
	Technician t;
	Data m_d, s_d, t_d;
	cout << "Manager:" << endl;
	m.inputdata(m_d);
	cout <<endl<< "Salesperson:" << endl;
	s.inputdata(s_d);
	cout <<endl<<"Technician" << endl;
	t.inputdata(t_d);
	m.inputbonus();
	s.inputprofit();
	m.get_pay(m_d);
	t.get_pay(t_d);
	s.get_pay(s_d);
	Report r;
	r.Insert_Infom(m_d);
	r.Insert_Infom(s_d);
	r.Insert_Infom(t_d);
	r.Print_Infom();
	
	return 0;
};