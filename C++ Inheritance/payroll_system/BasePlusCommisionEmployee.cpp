#include <string>
#include <iomanip>
#include <sstream>

#include "BasePlusCommisionEmployee.h"
#include "CommisionEmployee.h"

using namespace std;

BasePlusCommisionEmployee::BasePlusCommisionEmployee(const string& fName , const string& lName, const string& number,
                                                    double gross, double rate, double salary) :
                            CommisionEmployee(fName, lName, number, gross, rate)
                            {
                                set_base_salary(salary);
                            }

double BasePlusCommisionEmployee::get_base_salary() const{
    return baseSalary;
}

void BasePlusCommisionEmployee::set_base_salary(double value){
    if (value < 0){
        throw invalid_argument("salary cannot be a nagative value.");
    }
    baseSalary = value;
}

double BasePlusCommisionEmployee::earnings() const{
    return baseSalary + CommisionEmployee::earnings();
}

string BasePlusCommisionEmployee::to_string() const{
    ostringstream text;
    text << CommisionEmployee::to_string() << "\nBase Salary : Rs." << setprecision(2) << fixed
            << baseSalary;
        
    return text.str();
}

