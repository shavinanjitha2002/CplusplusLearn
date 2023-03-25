#include <string>

#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.h"

class SalariedEmployee : public Employee{
public:
    // declare the constructr
    SalariedEmployee(const std::string&, const std::string&, const std::string&, double = 0.0);
    virtual ~SalariedEmployee() = default;

    // getter ans setter
    double get_salary() const;
    void set_salary(double = 0.0);

    // create the virtual earnings method
    virtual double earnings() const override;
    virtual std::string to_string() const override;

private:
    double salary;

};


#endif