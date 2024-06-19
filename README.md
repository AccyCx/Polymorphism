# Polymorphism
多态功能练习
Assume that the employees in a company are Manager, Technician and Salesperson. Please design a program (including Employee.h, Employee.cpp, Report.h, Report.cpp and demo.cpp etc.) to meet the following requirements.
Requirement:
The salary of employees in this company are calculated by month as
For the Manager:		payment = salary + bonus
For the Technician:	payment = salary
For the Salesperson:	payment = salary + profit * 5%
For each employee, there are ID, name, gender, enroll date, position, salary, etc.
For each employee, the interface get_pay() is employed to calculate the payment and the operator << should be overloaded to realize the output of the employee-related information.
Design a Report class to display the employee’s payment of that month and provided the following interfaces:
Insert interface that can insert employee’s information to Report class.
Print interface that can display each employee’s ID, name, gender, enroll date, payment of that month and calculate the max and min payment of this employee.
5Overload the operator [] for Report class, make the position as the index and can search all the employees based on the position.
Write a main() function to testify your class definition.
Firstly, create object for each kind of employee and by using insert interface of the Report class to insert these employee’s information to the report.
Secondly, display the employee’s payment report of the month by using the print interface of Report class.
我的代码没有实现求薪资的最大值和最小值，并且没有测验[]的重载函数，但应该有bug
