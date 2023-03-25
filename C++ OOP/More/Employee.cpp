#include<iostream>
#include<string>
#include"Person.h"
#include"Employee.h"

using namespace std;

void setFirstName(Employee& employee, double s) {
    employee.salary = s;
}

Employee::Employee(const Person& empPerson, double salary) : salary{salary} {
        person = empPerson;
        cout << "created the employee name with " << person.getFirstName() << endl;
    }

Employee::Employee(const Person& person) : Employee{person, 45000} {
    // empty body
}

Employee::~Employee() {
    cout << "destroyed employee named " << person.getFirstName() << endl;
}