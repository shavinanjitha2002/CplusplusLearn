//
// Created by DELL on 1/2/2022.
//

#include <iostream>
#include <string>

#include "Package.h"

#ifndef C___EXCERSISES_PACKAGE_TEST_H
#define C___EXCERSISES_PACKAGE_TEST_H

int main(){
    // create the package object
    Package aPackage("Shavin", "Sea beach road, Ambalangoda", "Southern", "Ambalangoda", 5478, 45.44, 5.5);
    // print the package
    aPackage.printPackage();
}


#endif //C___EXCERSISES_PACKAGE_TEST_H
