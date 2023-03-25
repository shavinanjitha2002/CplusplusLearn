#include <string>

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

// declare the emloyee class interfave
class Employee{
public:
    // declare the constructor
    Employee(const std::string&, const std::string&, const std::string&);
    virtual ~Employee() = default;

    // geter and setter
    std::string get_first_name() const;
    std::string get_last_name() const;
    std::string get_social_number() const;

    void set_first_name(const std::string&);
    void set_last_name(const std::string&);
    void set_social_number(const std::string&);

    // create the pure virual method for earnings
    virtual double earnings() const = 0;
    // declare the virtual to_string method
    virtual std::string to_string() const;

private:
    // declare the data members
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;

};

#endif