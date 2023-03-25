#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <stdexcept>

#include "Employee.h"

// initialize the static members
unsigned int Employee::current_count{0};
unsigned int Employee::count{0};


// declare the static memebr function
unsigned int Employee::getCurrentCount() {return Employee::current_count;}
unsigned int Employee::getCount() { return Employee::count;}

// implement the friend functions
void change_name(Employee& emp, std::string name){
    emp.name = name;
}

Employee::Employee(std::string n, int a, double h) 
        {
            set_age(a);
            set_name(n);
            set_height(h);
            std::cout << "Object " << name <<  " was construct." << std::endl;
            // increment the employee count
            Employee::current_count++;
            Employee::count++;
    }

Employee& Employee::set_age(int age){
        if (age < 0){
            throw std::invalid_argument("age cannot be a negative value.");
        }
        this->age = age;
        return *this;
    }

Employee& Employee::set_height(double height){
        if (height <= 0){
             throw std::invalid_argument("height cannot be a negative value.");
        }
        this->height = height;
        return *this;
    }

Employee& Employee::set_name(std::string name){
        this->name = name;
        return *this;
    }

std::string Employee::get_name() const{ return this->name;}

int Employee::get_age() const{ return this->age;}

double Employee::get_height() const{return this->height;}

std::string Employee::to_string(){
        std::ostringstream text;
        text << "Name : " << (*this).name << "\nAge : " << (*this).age << "\nHeight : " << std::setprecision(2) 
            << std::fixed << this->height;
        return text.str();
    }

Employee::~Employee(){
        std::cout << "Object " << name << " was deleted." << std::endl;
        Employee::current_count--;
    }
