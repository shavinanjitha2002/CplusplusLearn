#include <iostream>
#include <array>
#include <cstddef>
#include <iomanip>

using namespace std;

int main(){
    // declare the array and initlaize the array using array class
    array<int , 5> array1{1, 2, 3, 4, 5};

    // print the items using the for loop
    for (int i = 0; i < array1.size() ; i++){
        cout << array1[i] << endl;
    }

    // declare the another array using the const size varaiable
    const size_t arraySIze{5};

    array<double , arraySIze> array2{}; // array initialize to zero
    // prin the value with the indexes
    cout << "Index" << setw(10) << "Element" << endl;

    for (unsigned int i = 0; i < array2.size(); i++){
        cout << setw(5) << i << setw(10) << array2[i] << endl;
    }

}
