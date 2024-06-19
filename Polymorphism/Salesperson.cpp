#include "Salesperson.h"
void Salesperson::inputprofit() {
	cout <<endl<< "Input Profit:";
	cin >> profit;
};
void  Salesperson::get_pay(Data& a) {
	a.salary= salary + profit * 0.05;
	a.position = "Salesperson";
};