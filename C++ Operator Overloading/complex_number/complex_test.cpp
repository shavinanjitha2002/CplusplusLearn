#include <iostream>
#include <string>

#include "complex.h"

using namespace std;

int main(){
    // create the complex number
    Complex c1{1, 2};
    Complex c2{1, -1};
    Complex c3;

    cout << c1 << " and " << c2 << endl;

    Complex c4 = c2 + c1;
    Complex c5 = c2 - c1;

    cout << "c2 + c1 = " << c4 << "\nc2 - c1 = " << c5 << endl;
    Complex c6;
    cin >> c6;

    cout << c6;

    cout << "c1 == c2 : " << (c1 = c2) << endl;
    cout << "c1 == 0 : " << (!c1) << endl;
}