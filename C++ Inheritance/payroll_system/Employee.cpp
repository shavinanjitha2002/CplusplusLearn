#include <string>
#include <iomanip>
#include <sstream>

#include "Employee.h"

using namespace std;

Employee::Employee(const string& fName , const string& lName , const string& number) : 
                    firstName(fName),
                    lastName(lName)
                    {
                        // set the social security number
                        set_social_number(number);
                    }

string Employee::get_first_name() const{
    return firstName;
}

string Employee::get_last_name() const{
    return lastName;
}

string Employee::get_social_number() const{
    return socialSecurityNumber;
}

void Employee::set_first_name(const string& name){
    firstName = name;
}

void Employee::set_last_name(const string& name){
    lastName = name;
}

void Employee::set_social_number(const string& number){
    if (number.length() != 9){
        throw invalid_argument("social security number must have the 9 digits.");
    }
    socialSecurityNumber = number;
}

// declare the to_stringmethod
string Employee::to_string() const{
    ostringstream text;
    text << "First Name : " << firstName << "\nLast Name : " << lastName
        << "\nSocial Security Number : " << socialSecurityNumber;

    return text.str();    
}
