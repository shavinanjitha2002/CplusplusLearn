//
// Created by DELL on 1/2/2022.
//
#include <iostream>
#include <string>
#include <ostream>
#include <iomanip>

#include "Package.h"

using namespace std;

Package::Package(string name, string addres, string state, string city, unsigned int zip_code
                 , double cost, double weight):
                 name{name},
                 address{addres},
                 state{state},
                 city{city},
                 ZIP{zip_code}
                 {
                     // set the cost and weight
                     setCostPerOunce(cost);
                     setWeight(weight);
                 }

double Package::getCostPerOunce() const {
    return costPerOunce;
}

void Package::setCostPerOunce(double costPerOunce) {
    if (costPerOunce < 0){
        throw invalid_argument("cost cannot be a negative value.");
    }
    Package::costPerOunce = costPerOunce;
}

double Package::getWeight() const {
    return weight;
}

void Package::setWeight(double weight) {
    if (weight < 0){
        throw invalid_argument("weight must be the positive value.");
    }
    Package::weight = weight;
}

double Package::calculateCost() const {
    return costPerOunce * weight;
}

string Package::to_string() const {
    ostringstream text;
    text << left << setw(15) << "name   " << setw(25) << "address   " << setw(10 ) <<
    "state   " << setw(10) << "city   " << endl << setw(75) << "-" << setfill('-') << endl <<
    setw(15) << name << "   " << setw(25) << address << "   " << setw(10) << state << "   " << setw(10)
    << "   " << city << endl;

    text << endl << "Cost Per Ounce (Rs.) : " << fixed << setprecision(2) << costPerOunce <<
            endl << "Weight (Ounce) : " << weight << endl;

    return text.str();

}

void Package::printPackage() const {
    cout << left << setw(15) << "name   " << setw(25) << "address   " << setw(10 ) <<
         "state   " << setw(10) << "city   " << endl << setw(75) << setfill('-') << endl <<
         setw(15) << name << "   " << setw(25) << address << "   " << setw(10) << state << "   " << setw(10)
         << "   " << city << endl;

    cout << endl << "Cost Per Ounce (Rs.) : " << fixed << setprecision(2) << costPerOunce <<
         endl << "Weight (Ounce) : " << weight << endl;

}
