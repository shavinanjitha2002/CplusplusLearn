#include <string>
#include <iomanip>
#include <sstream>

#include "BasePlusCommisionEmployee.h"

using namespace std;

BasePlusCommisionEmployee::BasePlusCommisionEmployee(const string& fName , const string& lName 
                                                    ,const string& number , double salary
                                                    , double rate , double base) :
                            CommisionEmployee(fName, lName, number ,salary, rate)
                            {
                                set_base(base);
                            }

double BasePlusCommisionEmployee::get_base() const{
    return baseSalary;
}

void BasePlusCommisionEmployee::set_base(double value){
    if (value < 0){
        throw invalid_argument("cannot get the negatie values");
    }

    baseSalary = value;
}

double BasePlusCommisionEmployee::earnings() const{
    return CommisionEmployee::earnings() + baseSalary;
}

string BasePlusCommisionEmployee::to_string() const{
    ostringstream text;
    text << CommisionEmployee::to_string() << "\nBase Salary : Rs." << baseSalary << endl;

    return text.str();
}

BasePlusCommisionEmployee::~BasePlusCommisionEmployee(){
    cout << "bae plus commision employee with name " << firstName << " was deleted." << endl;
}