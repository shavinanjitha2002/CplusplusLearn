#include<iostream>
#include<string>
#include "Person.h"

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {

    friend void setSalary(Employee&, double);

public:
    Employee(const Person& person, double salary);
    Employee(const Person& person);
    ~Employee();

private:
    Person person;
    double salary;
};

#endif