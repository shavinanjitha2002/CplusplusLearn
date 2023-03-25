//
// Created by DELL on 1/8/2022.
//
#include <iostream>

using namespace std;

void incrementValue(int* intPtr){
    *intPtr = *intPtr + 4;
    cout << "address of the pointer : " << intPtr << endl;
}

int main(){
    // create the some integer value
    int value{44};
    // declare the int pointer
    int* intPtr{&value};
    cout << "value before changed : " << value << endl;
    // pass to the function
    incrementValue(intPtr);
    cout << endl << "passed pointer address : " << intPtr << endl;
    cout << "value after change : " << value << endl;

}
