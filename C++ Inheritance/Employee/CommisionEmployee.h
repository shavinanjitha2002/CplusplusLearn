//
// Created by DELL on 11/17/2021.
//
#include <string>
#include <iostream>

#ifndef C___INHERITANCE_COMMISIONEMPLOYEE_H
#define C___INHERITANCE_COMMISIONEMPLOYEE_H

class CommisionEmployee{
public:
    // declare the constructor
    CommisionEmployee(const std::string& , const std::string& , const std::string& , double = 0.0, double = 0.0);
    // create the getter and setters
    std::string get_first_name() const;
    std::string get_last_name() const;
    std::string get_social_number() const;
    double get_salary() const;
    double get_rate() const;
    // daclare the setter
    void set_first_name(std::string&);
    void set_last_name(std::string&);
    void set_social_number(std::string&);
    void set_salary(double value);
    void set_rate(double value);

    // declare the to_string and earnings mehtods
    virtual std::string to_string() const;
    virtual double earnings() const;

    // declare the destructor as default
    virtual ~CommisionEmployee();

protected:
    // declare the private data menebers
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
    double Salary;
    double commisionRate;
};

#endif //C___INHERITANCE_COMMISIONEMPLOYEE_H
