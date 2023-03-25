#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <initializer_list>
#include <string>
#include <sstream>

#include "Array.h"

using namespace std;

Array::Array(int size):
        size{(size > 0) ? static_cast<size_t>(size) : 
            throw invalid_argument("size cannot be a negavtive value.")},
        ptr{new int[size]{}} {
            // emptty cosnstructor body
        }

// implement the copy constructor
Array::Array(const Array& arrayToCopy):
    size{arrayToCopy.size} , 
    ptr{new int[size]}
    {
        // copy the allvalues of the arrayToCopy this new array
        for (unsigned int i = 0; i < size; i++){
            ptr[i] = arrayToCopy.ptr[i];
        }
    }

// declare the destructor
Array::~Array(){
    // deallaocate the memory fro this array
    delete[] ptr; // relase the pointer based array memory
}

size_t Array::get_size() const{
    return size;
}

bool Array::operator==(const Array& right) const{
    if (size != right.size){
        return false;
    }

    for (size_t i = 0; i < size; i++){
        if (ptr[i] != right.ptr[i]){
            return false;
        }
    }
    return true;
}

// subscript method
int& Array::operator[](int position){
    if (position < 0 || position >= size){
        throw invalid_argument("subscript are out of range");
    }
    return ptr[position];

}

int Array::operator[](int position) const{
    if (position < 0 || position >= size){
        throw invalid_argument("subscript out of range.");
    }

    return ptr[position];
}

// decalre the firend method implementation

istream& operator>>(istream& in , Array& array){
    for (size_t i = 0; i < array.size; i++){
        in >> array.ptr[i];
    }

    return in;
}

ostream& operator<<(ostream& out, const Array& array){
    for (size_t i = 0; i < array.size; i++){
        out << array.ptr[i] << " ";
    }
    out << endl;
    return out;
}

const Array& Array::operator=(const Array& right){
    if (&right != this){ // avoid the self assignment
        if (size != right.size){
            delete[] ptr; // relase the memory for new array
            size = right.size;
            ptr = new int[size];
        }
        // copy the array values
        for (size_t i = 0; i < size; i++){
            ptr[i] = right.ptr[i];
        }
    }

    // return the this reference
    return *this;
}