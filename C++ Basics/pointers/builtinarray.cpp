#include <iostream>

using namespace std;

void printArray(const int values[] , const size_t size);

int main(){

// create the built in array
    int array1[5];
    // initialize the array with another constructor
    int array2[5] {4, 7, 8, 9, 6};
    // declare the another array
    int array[] {7, 8, 12};

    // pass to the method for print the values of the array
    printArray(array1, 5);
    printArray(array2, 5);
    printArray(array, 3);

}

void printArray(const int values[] , const size_t size){
    // use the form loop for this
    for (int i = 0; i < size; i++){
        cout << values[i] << ", ";
    }
    cout << endl;
}