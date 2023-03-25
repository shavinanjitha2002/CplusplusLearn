#include <iostream>

using namespace std;

// create the overloaded function for calculate the squre of the value
double squre(double value){
    return value * value;
}

int squre(int value){
    return value * value;
}

unsigned int squre(unsigned int value){
    return value * value;
}

int main(){

// call to the different overloaded functions
    double value1{45.44};
    int value2{-4};
    unsigned int value3{7};

    // call to the functions
    cout << "square of the " << value1 << " is : " << squre(value1) << endl;
    cout << "sqare of the " << value2 << "is : " << squre(value2) << endl;
    cout << "square of the " << value3 << "is : " << squre(value3) << endl;



}

