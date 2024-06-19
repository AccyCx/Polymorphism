#pragma once
#include "Employee.h"
class Salesperson :
    public Employee
{
    public:
    Salesperson(){};
    const string position = " Salesperson";
    const double salary = 10000;
    double profit;
    void get_pay(Data& a);
    void inputprofit();
};

