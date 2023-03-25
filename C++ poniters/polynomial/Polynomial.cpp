//
// Created by DELL on 1/9/2022.
//
#include <iostream>
#include <string>
#include <iomanip>
#include <stdexcept>

#include "Polynomial.h"

using namespace std;

// implement the Polynomial class methods
Polynomial::Polynomial(std::vector<Term>& array):
            arrayOfTerm(array){
    length = arrayOfTerm.size();
}

Polynomial::Polynomial() {
    // create the empty vector based array of term
    // and set the length to the 3

}

