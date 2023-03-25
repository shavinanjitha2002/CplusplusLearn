#include <iostream>
#include <array>

using namespace std;

const size_t rows{2};
const size_t columns{3};
void printArray(const array<array<int , columns> ,rows>& array);


int main(){
    // create the two dimensional array
   

    array<array<int , ::columns>, ::rows> array1{1, 2, 3, 4, 5, 6};
    array<array<int, ::columns>, ::rows> array2{1, 2, 3};

    // print out the array with the method calling
    printArray(array1);
    printArray(array2);
}

void printArray(const array<array<int, columns>, rows>& array){
    // use the nes ted for loop for this
    for (auto const& row : array){
        for (auto const& column : row){
            cout << column << " , ";
        }

        cout << endl;
        
        
    }
}