#include <iostream>
#include <iomanip>
#include <string>
#include "Array.h"

using namespace std;

int main(){
    // declare the new constructor
    Array array{5};
    // get the values to array from standarad inout line
    cout << "enter the array : ";
    cin >> array;
    // display the array
    cout << "the array : " << array<< endl;
    
}