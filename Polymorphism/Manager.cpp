#include "Manager.h"
void Manager::inputbonus() {
	cout <<endl<< "Input bonus:";
	cin >> bonus;
};
void Manager::get_pay(Data& a) {
	a.salary= salary + bonus;
	a.position = "Manager";
};