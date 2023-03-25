#include <iostream>
#include <iomanip>
#include <string>

#include "phonenumber.h"

using namespace std;

ostream& operator<<(ostream& out , const PhoneNumber& number){
    // add the phone number codes to the stream 
    out << "Area Code : " << number.area_code << "\nExchnage : " 
        << number.exchnage << "\nLine : " << number.line_code
        << "\n(" << number.area_code << ") " << number.exchnage << " " << number.line_code;

    return out;
}

istream& operator>>(istream& in, PhoneNumber& number){
    in.ignore();
    in >> setw(3) >> number.area_code;
    in.ignore(2);
    in >> setw(3) >> number.exchnage;
    in.ignore();
    in >> setw(4) >> number.line_code;

    return in;
}