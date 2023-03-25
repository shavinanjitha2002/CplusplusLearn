#include <string>
#include <sstream>
#include <iomanip>

#include "SalariedEmployee.h"

using namespace std;

SalariedEmployee::SalariedEmployee(const string& fName , const string& lName , const string& number,
                                    double value) : 
                Employee(fName, lName, number)
                {
                    // set the salary
                    set_salary(value);
                }

double SalariedEmployee::get_salary() const{
    return salary;
}

void SalariedEmployee::set_salary(double value){
    if (value < 0){
        throw invalid_argument("salary cannot be a negative value.");
    }

    salary = value;
}

double SalariedEmployee::earnings() const{
    return salary;
}

string SalariedEmployee::to_string() const{
    ostringstream text;
    text << Employee::to_string() << "\nSalary : Rs." << setprecision(2) << fixed << salary;
    return text.str();
}