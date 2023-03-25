#include <iostream>
#include <stdexcept>
#include "DivideByZeroException.h"

using namespace std;

// divisoon function declare
double division(double a, double b){
    // check the denominatoro if the zero
    if (b == 0){
        throw DivideByZeroException{};
    }

    return a/b;
}

int main(){
    // declare the two double values
    double a, b;
    try{
        cout << "enter a and b using space : ";
        cin >> a >> b;
        cout << "a/b = " << division(a, b) << endl;
    }
    catch (DivideByZeroException& exception){
        cout << exception.what() << endl;
    }
}