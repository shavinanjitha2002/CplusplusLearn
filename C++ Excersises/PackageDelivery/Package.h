//
// Created by DELL on 1/2/2022.
//
#include <ostream>
#include <string>
#include <iostream>

#ifndef C_EXCERSISES_PACKAGE_H
#define C_EXCERSISES_PACKAGE_H

class Package{
public:
    Package(std::string, std::string , std::string, std::string, unsigned int, double, double);
    ~Package()  = default;

    // setter

    std::string to_string() const;
    void printPackage() const;

    double calculateCost() const;

    double getCostPerOunce() const;

    void setCostPerOunce(double costPerOunce);

    double getWeight() const;

    void setWeight(double weight);

private:
    std::string name;
    std::string address;
    std::string state;
    std::string city;
    unsigned int ZIP;
    // var for cost
    double costPerOunce;
    double weight;
};

#endif //C_EXCERSISES_PACKAGE_H
