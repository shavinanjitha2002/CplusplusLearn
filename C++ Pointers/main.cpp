#include <iostream>

using namespace std;

int main() {
    // create the integer varaible
    int value{4};
    // create the poniter
    int* valuePtr{&value};
    // display the value of the integer and integer poniter
    cout << "value : " << value << "\nvalue pointer : " << valuePtr << endl;
    // difference the value of the poniter
    cout << "value of the poniter : " << *valuePtr << endl;
    // change the value of the ptr
    *valuePtr = *valuePtr + 8;
    cout << "new value : " << value  << endl;
    // change the pointer address value
    cout << endl;
    cout << "pointer address before change : " << valuePtr << endl;
    valuePtr++; // change the address of the pointer
    cout << "size of the integer : " << sizeof(int) <<
        endl << "new address of the pointer after change : " << valuePtr << endl;
    // value of the new poniter address
    cout << "new value of the new address : " << *valuePtr << endl;

    // create the char pointer
    char c{'d'};
    char* cPtr{&c};
    // display the address of the char
    cout << endl << "char pointer address : " << cPtr << endl;
    cPtr++; // change the ptr
    cout << "size of the char : " << sizeof(char) << endl << "address of the char pointer after changed : "
        << cPtr << endl;
}
