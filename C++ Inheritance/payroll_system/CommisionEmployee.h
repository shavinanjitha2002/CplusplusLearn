#include <string>

#include "Employee.h"

#ifndef COMMISIONEMPLOYEE_H
#define COMMISIONEMPLOYEE_H

class CommisionEmployee : public Employee{
public:
    CommisionEmployee(const std::string& fName, const std::string& lName , const std::string& number,
                        double, double);
    virtual ~CommisionEmployee() = default;

    // getter and setter
    double get_gross_salary() const;
    void set_gross_salary(double = 0.0);

    double get_rate() const;
    void set_rate(double = 0.0);

    //virtual functions
    virtual double earnings() const override;
    virtual std::string to_string() const override;

private:
    double grossSales;
    double commisionRate;
};

#endif