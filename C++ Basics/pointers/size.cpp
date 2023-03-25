#include <iostream>

using namespace std;

int main(){

    // declare thedifferent data types
    int integer{54};
    long longer{54554555};
    double doubleValue{54.44};
    long long huge{878};
    char charctor{'c'};
    // declare the pointer 
    int* poniter{&integer};
    int array[5];

    // display the size of the data types
    cout << "size of integer : " << sizeof integer << endl;
    cout << "size of long : " << sizeof longer << endl;
    cout << "size of the double : " << sizeof doubleValue << endl;
    cout << "size of hte very long : " << sizeof huge << endl;
    cout << "size of the char : " << sizeof charctor << endl;
    cout << "size of the array : " << sizeof array << endl;
    cout << "size of the pointer : " << sizeof poniter << endl;

}