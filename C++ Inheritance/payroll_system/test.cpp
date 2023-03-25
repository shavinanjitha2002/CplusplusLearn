#include <string>
#include <iostream>
#include <vector>
#include <typeinfo>


#include "Employee.h"
#include "BasePlusCommisionEmployee.h"
#include "CommisionEmployee.h"
#include "SalariedEmployee.h"

using namespace std;

int main(){
    // create the new employee objects
    SalariedEmployee salariedEmp("shavin", "anjitha", "145215412", 500000);
    CommisionEmployee comEmp("reshani", "kavindya", "458965412", 400000, 0.12);
    BasePlusCommisionEmployee basePlusEmp("kasun", "udara", "785451256", 300000, 0.05, 20000);

    // display the each employee and earnings
    cout << "EMPLOYEE WITH STATIC BINDING\n" << "Salaried Employee : \n"
        << salariedEmp.to_string() << "\naernings : " << salariedEmp.earnings() 
        << "\n\nCommision Employee : \n" << comEmp.to_string() << "\nearnings : "
        << comEmp.earnings() << "\n\nBasePlus Employee : \n" << basePlusEmp.to_string() <<
        "\nearnings : " << basePlusEmp.earnings() << endl;

    // create the employee vector
    vector<Employee*> employeeList{&salariedEmp, &comEmp, &basePlusEmp};
    // print the employee throught the employee list
    cout << "\nEMPLOYEE WITH POLYPHORMIC ACESS BEHAVIOUR\n";
    for (Employee* empPtr : employeeList){
        cout << empPtr->to_string() << "\nEarning : Rs." << empPtr->earnings() << endl << endl;
    }

    // incease the base plus employee base salary by ten p[ercent
    vector<Employee*> newEmployeeList{
        new SalariedEmployee("tharusha", "dinujaya", "142562123", 452000),
        new CommisionEmployee("pasindu", "randika", "457856985", 450000, 0.08),
        new BasePlusCommisionEmployee("himeth", "hasira", "412555777", 460000, 0.09, 45000)
    };

    for (Employee* empPtr : newEmployeeList){
        cout << "name is the " << empPtr->get_first_name() << endl;

        BasePlusCommisionEmployee* basePtr = dynamic_cast<BasePlusCommisionEmployee*>(empPtr);

        if (basePtr != nullptr){
            double oldValue = basePtr->get_base_salary();
            cout << "\nEmployee Old Base Salary : Rs." << oldValue << endl;
            basePtr->set_base_salary(1.1 * oldValue);
            cout << "Employee new Base Salary : Rs." << basePtr->get_base_salary() << endl;
        }
    }

    for (Employee* empPtr : newEmployeeList){
        // get the type of the employee
        cout << typeid(*empPtr).name() << " was deleted." << endl;
        delete empPtr;
    }

    
}