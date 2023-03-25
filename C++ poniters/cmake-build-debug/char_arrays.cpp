//
// Created by DELL on 1/8/2022.
//
#include <iostream>

using namespace std;

int main(){
    // initialize the char array
    char name[] {'s','h', 'v', 'i', 'n', '\0'};
    const char* name2{"shavin"};

    char* charPtr{name};

    cout << "name : " << name << endl;
    cout << "name 2 : " << name2 << endl;
    cout << "char Ptr : " << *charPtr << endl;

}
