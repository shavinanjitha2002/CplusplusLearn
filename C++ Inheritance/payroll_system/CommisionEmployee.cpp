#include <string>
#include <sstream>
#include<iomanip>

#include "CommisionEmployee.h"
#include "Employee.h"

using namespace std;

CommisionEmployee::CommisionEmployee(const string& fName , const string& lName , const string& number,
                                    double salary , double rate) : 
                    Employee(fName , lName , number)
                    {
                        set_gross_salary(salary);
                        set_rate(rate);
                    }

double CommisionEmployee::get_gross_salary() const{
    return grossSales;
}

double CommisionEmployee::get_rate() const{
    return commisionRate;
}

void CommisionEmployee::set_gross_salary(double value){
    if (value < 0){
        throw invalid_argument("cannot take the negative value for gross salary.");
    }
    grossSales = value;
}

void CommisionEmployee::set_rate(double value){
    if (value < 0 || value > 1.0){
        throw out_of_range("rate cannot take the value behind the 0 and 1.0");
    }
    commisionRate = value;

}

double CommisionEmployee::earnings() const{
    return (get_gross_salary() * get_rate());
}

string CommisionEmployee::to_string() const{
    ostringstream text;
    text << Employee::to_string() << setprecision(2) << fixed;
    text << "\nGross Sales : Rs." << grossSales << "\nCommision Rate : " << commisionRate;

    return text.str();
}