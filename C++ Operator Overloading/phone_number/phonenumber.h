#include <iostream>
#include <string>

#ifndef PHONENUMBER_H
#define PHONENUMBER_H

class PhoneNumber{

    friend std::ostream& operator<<(std::ostream& , const PhoneNumber&);
    friend std::istream& operator>>(std::istream& , PhoneNumber&);

public:
    // declare the public member functions
private:
    std::string area_code;
    std::string line_code;
    std::string exchnage;
};

#endif