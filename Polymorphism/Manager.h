#pragma once
#include "Employee.h"
class Manager :
    public Employee
{
    public:
        const string position = "Manager";
        const double salary = 20000;
        double bonus;
        Manager(){};
        void get_pay(Data& a);
        void inputbonus();

};

