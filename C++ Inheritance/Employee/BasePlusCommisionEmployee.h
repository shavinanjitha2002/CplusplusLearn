#include <iostream>
#include <string>

#include "CommisionEmployee.h"

#ifndef BASEPLUS_H
#define BASE_PLUS

class BasePlusCommisionEmployee : public  CommisionEmployee {
public:
    // declare the constructor
    BasePlusCommisionEmployee(const std::string&, const std::string& , const std::string& , double = 0.0, double = 0.0, double = 0.0);

    // declare the method fo get ans set base value
    double get_base() const;
    void  set_base(double value);

    virtual double earnings() const override;
    virtual std::string to_string() const override;

    // declare the dectructor as the virtual
    virtual ~BasePlusCommisionEmployee();


private:
    double baseSalary;
};

#endif
