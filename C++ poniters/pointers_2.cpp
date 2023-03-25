//
// Created by DELL on 1/8/2022.
//

#include <iostream>

using namespace std;

int main(){
    // create the integer variable
    int a{4};
    int* aPtr{&a};
    // create the pointer to aPtr
    int** doublePtr{&aPtr};

    // display the ptr address and its value
    cout << "value of a : " << a << endl << "address of aPtr : " << aPtr << endl
        << "value of the aPtr : " << *aPtr << endl << "address of the doublePtr : " << doublePtr
        << endl << "address that pointer point to : " << *doublePtr << endl << "value of double Ptr : "
        << **doublePtr << endl;
}

