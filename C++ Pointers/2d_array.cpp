//
//
// Created by DELL on 1/14/2022.
//
#include <iostream>

using namespace std;

// the function
void printFunc(int  (*array)[3]){
    cout << (*(array + 1) + 1) << endl;
}

int main(){
    // declare the 2d integer array
    int array[2][3]{{4, 5, 8},
                    {22, 44, 59}};
    // print the some address and values
    cout << "address of first element from array: " << array << endl;
    cout << "address of first element from array[0] : " << array[0] << endl;
    cout << "value of the first element from array[0][0] : " << array[0][0] << endl;
    cout << "value of the first element from *array[0] : " << *array[0] << endl;
    cout << "value of the 1,2 value address : " << (array[0] + 1) << " and value : " << *(array[0] + 1) << endl;
    cout << "address of 2,2 : " << (*(array + 1) + 1) << " and value is " << *(*(array + 1) + 1) << endl;


    cout << "print function : ";
    printFunc(array);

    // create the 3d array with; pointer
    int array2[2][2][3] = {
            {{2, 4, 5} , {8, 7, 4}},
            {{4, 5, 1} , {2, 3, 5}}
    };
    // get the values and address from the pointer to array
    cout << "address of first element : " << array2 << endl;
    cout << "                         : " << array2[0] << endl;
    cout << "address of the second element : " << *(*(*array2 + 1) + 1) << endl;

    // create the new memory for 1d pointer based array
    int* value = new(int[4]);
    cout << *value << endl;

}

