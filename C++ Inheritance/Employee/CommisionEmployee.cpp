#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

#include "CommisionEmployee.h"

using namespace std;

CommisionEmployee::CommisionEmployee(const string& fName, const string& lName , const string& number 
                                    , double salary , double rate) : 
                    firstName(fName),
                    lastName(lName),
                    socialSecurityNumber(number) {
    set_salary(salary);
    set_rate(rate);

}

string CommisionEmployee::get_first_name() const{
    return firstName;
}

string CommisionEmployee::get_last_name() const{
    return lastName;
}

string CommisionEmployee::get_social_number() const{
    return socialSecurityNumber;
}

double CommisionEmployee::get_salary() const{
    return Salary;
}

double CommisionEmployee::get_rate() const{
    return commisionRate;
}

void CommisionEmployee::set_first_name(string& fNmae){
    firstName = fNmae;
}

void CommisionEmployee::set_last_name(string& lNmae){
    lastName = lNmae;
}

void CommisionEmployee::set_social_number(string& number){
    // if ((!(number.length()  == 9) && !(number.length() == 10 && number.at(4) == '-'))){
        // throw invalid_argument("cannot take this format for social security number.");
    // }

    socialSecurityNumber = number;
}

void CommisionEmployee::set_rate(double value){
    if (value < 0 || value > 1.00){
        throw out_of_range("commsison rate only cannot percent value only");
    }
    commisionRate = value;
}

void CommisionEmployee::set_salary(double value){
    if (value < 0){
        throw invalid_argument("salary cannot be a negatve value.");
    }
    Salary = value;
}

double CommisionEmployee::earnings() const{
    return Salary * commisionRate;
}

string CommisionEmployee::to_string() const{
    ostringstream text;
    text << "first name : " << firstName << "\nlast name : " << lastName << "\nSocial security number : "
        << socialSecurityNumber << "\nSalary : Rs." << setprecision(2) << fixed << Salary
        << "\nCommsison Rate : " << setprecision(2) << fixed << commisionRate * 100 << endl;

    return text.str();
}


// declare the destructor
CommisionEmployee::~CommisionEmployee(){
    cout << "commsision employee with name " << firstName << " was deleted." << endl;
}