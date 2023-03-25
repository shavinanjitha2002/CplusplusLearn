#include <iostream>

using namespace std;

int main(){
    // create the pointer and varaible
    int* intPtr;
    int integer{54};

    // assign the addressed to intPtr
    intPtr = &integer;

    cout << "Integer value : " << integer << endl;
    cout << "Pointer : " << intPtr << endl;
    cout << "Integer Pointer : " << &integer << endl;
    cout << "Pointer Value : " << *intPtr << endl; 
}