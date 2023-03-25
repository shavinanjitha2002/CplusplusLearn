#include <iostream>
#include<string>
#include<iomanip>

using namespace std;

void displayBits(unsigned int);

struct Card{
    unsigned face : 4;
    unsigned suit : 2;
    unsigned color : 1;
}; // bit field for conserve storage

int main(){

    unsigned int x{1};
    unsigned int y{2};
    cout << y;

    cout << "before change positions: " << endl;
    displayBits(x);
    cout << "after change positions: " << endl;;
    displayBits(y);

}

void displayBits(unsigned int value){

    const unsigned int SIZE{8 * sizeof(unsigned int) - 1};
    const unsigned int MASK{static_cast<const unsigned int>(1 << MASK)};

    cout << setw(10) << value << " = ";

    for (unsigned int i{1}; i <= SIZE + 1; i++){
        cout << (value & MASK ? "1" : "0");
        value <<= 1;

        if (i % 8 == 0){
            cout << " ";
        }
    }

    cout << endl;
}