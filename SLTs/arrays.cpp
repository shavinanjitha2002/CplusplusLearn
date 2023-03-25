//
// Created by DELL on 4/30/2022.
//
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <iterator>
using namespace std;

int main(){
    ostream_iterator<int> output{cout, ","};
    // create the pointer based 1D array
    int values[5] {1, 2, 3, 4, 5};
//    values[0] = 5;
//    values[1] = 6;

    copy(begin(values), end(values), output);

    cout << "\nelement at index 2 is " << *(values + 1)
        << "and pointer is " << (values + 1) << endl;

    int * const intPtr{values};
    *intPtr = 4;
    cout << "Pointer value is " << *intPtr << endl;

//    intPtr += 2;
    cout << "new Pointer value is " << *intPtr << endl;

    // create the 2d array
    int array2[3][3] {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };

    cout << "--------------------" << endl;
    cout << **(array2 + 1) << ", " << array2[1];

    copy(begin(*array2), end(*array2), output);
}

