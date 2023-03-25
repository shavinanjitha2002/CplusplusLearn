#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdexcept>

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee{

// declare the friend function for class
friend void change_name(Employee&, std::string);

public:
    Employee(std::string, int, double);
    ~Employee();

    // setters
    Employee& set_age(int);
    Employee& set_name(std::string);
    Employee& set_height(double);

    // getter
    int get_age() const;
    double get_height() const;
    std::string get_name() const;

    std::string to_string();

    // static member function
    static unsigned int getCurrentCount();
    static unsigned int getCount();

private:
    std::string name;
    int age;
    double height;

    /// declare the static memver
    static unsigned int current_count;
    static unsigned int count;
};

#endif