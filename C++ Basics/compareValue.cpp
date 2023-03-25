#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

// create theh integers 
    int integer1{0};
    int integer2{0};

    // get the user values
    cout << "Enter the first Integer : ";
    cin >> integer1;

    cout << "Enter the second Integer : ";
    cin >> integer2;

    // compare the values
    if (integer1 == integer2){
        cout << integer1 << " = " << integer2 << endl;
    }

    if (integer1 != integer2){
        cout << integer1 << " != " << integer2 << endl;
    }

    if (integer1 > integer2){
        cout << integer1 << " > " << integer2 << endl;
    }

    if (integer1 < integer2){
        cout << integer1 << " < " << integer2 << endl;
    }

}