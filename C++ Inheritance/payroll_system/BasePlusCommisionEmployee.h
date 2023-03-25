#include <string>

#include "CommisionEmployee.h"

#ifndef BASEPLUS_H
#define BASEPLUS_H

class BasePlusCommisionEmployee : public CommisionEmployee{
public:
    BasePlusCommisionEmployee(const std::string&, const std::string&, const std::string&, 
                                double = 0.0, double = 0.0, double = 0.0);
    virtual ~BasePlusCommisionEmployee() = default;

    // getter and setter
    double get_base_salary() const;
    void set_base_salary(double = 0.0);

    // virtual methods
    virtual double earnings() const override;
    virtual std::string to_string() const override;

private:
    double baseSalary;
};

#endif