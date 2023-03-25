//
// Created by DELL on 1/8/2022.
//
#include <iostream>

using namespace std;

// decalre the function for get the sum of the array
void displaySum(const int array[], const size_t size){
    int sum{0};
    for (int i{0}; i < size; i++){
        cout << "element " << i << " is " << *(array + i) << endl;
        sum += *(array + i);
    }
    cout << endl;
    cout << "sum of the array is " << sum << endl;
    cout << "size of array in function : "  << sizeof(*array) << endl;
}

int main(){
    // declare the built in array
    int array[10]{4, 5, 7, 8, 9};
    // assign the array to pointer
    int* arrayPtr{array};
    cout << "array pointer address : " << arrayPtr << endl;
    cout << "array address: " << array << endl;
    cout << "firs element of the array : " << *array << endl;
    // display theh size
    cout << "size of the array : " << sizeof(array) << endl;
    // pass to the function
    displaySum(array, 10);


}

