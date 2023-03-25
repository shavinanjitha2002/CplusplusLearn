#include<iostream>
#include<iomanip>
#include<algorithm>
#include<iterator>

using namespace std;

void printPointer(const int* pointer){
    cout << pointer << " value: " << *pointer << endl;
    const int* anotherPointer{pointer};

}

void printArray(const int* values, size_t sizeOfArray){

    cout << endl << "array elements: ";
    for (int i = 0; i < sizeOfArray; i++){
        cout << values[i] << ", ";
    }
    cout << endl;
    cout << "size of array: " << sizeOfArray * sizeof values << endl;

}


int main(){

    int const* intPointer;
    int value{55};

    intPointer = &value;
    cout << intPointer << " value is : " << *intPointer << endl;

    value = 99;
    printPointer(intPointer);

    // create pointer based array
    int array[10] = {1, 2, 5, 8, 7, 9, 77, 44, -50, 10};
    printArray(array, 10);
    // sort the pointer based array
    sort(begin(array), end(array));
    printArray(array, 10);

    int* arrayPtr{array};
    cout << "first element: " << *arrayPtr << endl;
    cout << "second element: "<< *(++arrayPtr) << endl;
    cout << "fifth element: " << *(arrayPtr + 2) << endl;

    // create 2D pointer based array
    int array2[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };

    cout << "[2, 2] element = " << array2[2][2] << endl;
    cout << "first element of array = " << **array2 << endl;
    cout << "[1, 2] element = " << *((*(array2 + 1)) + 1) << endl;

    // C string
    const char* name = "shavin";
    for (int i = 0; i < 7; i++){
        cout << name[i] << ", ";
    }
    cout << endl;

}

