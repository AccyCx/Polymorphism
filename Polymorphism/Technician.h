#pragma once
#include "Employee.h"
class Technician :
    public Employee
{   
    public:
        Technician(){};
        const string position = "Technician";
        const double salary = 15000;
        void get_pay(Data& a);
};

