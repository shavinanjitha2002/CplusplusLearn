#include <iostream>
#include <string>

#ifndef COMPLEX_H
#define COMPLEX_H

class Complex{

    friend std::ostream& operator<<(std::ostream& , const Complex&);
    friend std::istream& operator>>(std::istream& ,Complex&);

public:
    Complex(double = 0, double = 0);
    // declare the setter 
    void set_real(double = 0);
    void set_imaginary(double = 0);

    // declre the getters
    double get_real() const;
    double get_imaginary() const;

    // declare the other utility functions
    double abs() const;
    bool is_real() const;
    bool is_imaginary() const;

    std::string to_string() const;

    // declare the overloaded opertaor methods
    Complex operator+(const Complex&) const;
    Complex operator-(const Complex&) const;
    Complex operator*(const Complex&) const;
    Complex operator/(const Complex&) const;
    
    bool operator==(const Complex&) const;
    bool operator!=(const Complex&) const;
    bool operator!() const;

    Complex inverse() const;

    // create the conversion constructors
    operator std::string() const;
    operator double() const;

    // declare the call operator
    double operator()() const{
        return abs();
    }

    // declare the subscrirt method
    double& operator[](unsigned int index);
    double operator[](unsigned int index) const;



private:
    double real;
    double imaginary;
};

#endif