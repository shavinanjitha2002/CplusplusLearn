#include <iostream>
#include <array>
#include <cstddef>

using namespace std;

int main(){
    // declare the array and pirnt the values using ranged based for loop
    array<int, 5> array1{1, 2, 3, 4, 5};
    // print the values
    for (int i : array1){
        cout << i << endl;
    }

    // usiing the int reference for modify the array elemnts
    for (int& i : array1){
        i *= 2;
    }

    // prinr the new values
    cout << "/nnew Values of the array : " << endl;
    cout << endl;

    for (int& i : array1){
        cout << i << endl;
    }

}