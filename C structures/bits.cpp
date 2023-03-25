#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

void displayBits(unsigned);

int main(){

    unsigned inputValue{0}; // unsigned inout integer

    cout << "Enterg an unsigned integer value : ";
    cin >> inputValue;

    displayBits(inputValue);
}

void displayBits(unsigned value){

    const unsigned SHIFT{8 * sizeof(unsigned) - 1};
    const unsigned MASK{static_cast<const unsigned>(1 << SHIFT)};

    cout << setw(10) << value << " = ";

    for (unsigned i{1} ; i <= SHIFT + 1; ++i){
        cout << (value & MASK ? '1' : '0');
        value <<= 1; // shift value left by 1

        if (i % 8 == 0){
            cout << " ";
        }

    } 
}