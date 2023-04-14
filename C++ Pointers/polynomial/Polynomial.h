//
// Created by DELL on 1/9/2022.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>
#include <vector>

#ifndef C___PONITERS_POLYNOMIAL_H
#define C___PONITERS_POLYNOMIAL_H

class Term{
    // friend function for Term
    friend std::ostream& operator<<(std::ostream& ,const Term&);
    friend std::istream& operator>>(std::istream&, const Term&);

public:
    Term(double = 0.0, int = 0);
    // getter ans setters
    void setCofficient(double);
    void setPower(int);
    double getCofficient() const;
    int getPower() const;

    // tostring function
    std::string to_string() const;
    // operator overloading
    Term& operator+(const Term&) const;
    Term& operator-(const Term&) const;
    // equality and non equality operator
    bool operator==(const Term&) const;
    bool operator!=(const Term&) const;


private:
    double cofficient;
    int power;
};

class Polynomial{
    // friend function
    friend std::ostream& operator<<(std::ostream& ,Polynomial&);
public:
    // create the initializer
    Polynomial(std::vector<Term>&);
    Polynomial();
    // declare the getter nd setters
    unsigned int getLength() const;
    double getCofficient(int power) const;
    int getPower(double cofficient) const;
    int* getPowers(double cofficients) const;

    // setters
    void setCofficient(int, double);
    // tostring method
    std::string to_string() const;
    // opeartor overloading function
    bool operator+(const Term&);
    bool operator-(const Term&);
    bool operator==(const Polynomial&) const;
    bool operator!=(const Polynomial&) const;


private:
    // declare the data members
    std::vector<Term> arrayOfTerm;
    unsigned int length;
};

#endif //C___PONITERS_POLYNOMIAL_H
