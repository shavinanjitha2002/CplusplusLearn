//
// Created by DELL on 1/14/2022.
//
#include <iostream>

using namespace std;

void printCharArray(const char* array){
//    array[0] = 'w';
    int i{0};
    while (*(array + i) != '\0'){
        cout << *(array + i);
        i++;
    }
    cout << endl;
}

int main(){
    // declare the char array
    char name[] = "shavin";
    cout << *(name + 2) << endl;
    // declare the another pointer to this name
    const char* charPtr{"Shavin"};
    // print the char array name
    cout << name << endl;
    cout << *charPtr << endl;

    // print the char arrays
    cout << "from the function:\n" << endl;
    printCharArray(name);
    printCharArray(charPtr);

    const char* string1 = "reshani";
    cout << string1 << endl;


}
