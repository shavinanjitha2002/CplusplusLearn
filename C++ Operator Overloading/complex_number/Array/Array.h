#include <iostream>
#include <initializer_list>
#include <string>

#ifndef ARRAY_H
#define ARRAY_H

class Array{
    // declare the firend functions
    friend std::ostream& operator<<(std::ostream& , const Array&);
    friend std::istream& operator>>(std::istream& , Array&);

public:
    explicit Array(int  = 10); // default constructor
    Array(const Array&); // copy constuctor
    // declare the list initializer for this
    ~Array();

    // get size method
    size_t get_size() const;
    // declare the methods for assigment and eqaulity
    const Array& operator=(const Array&);
    bool operator==(const Array&) const;

    // use the uneqaility operator
    bool operator!=(const Array& array) const{
        return ! (*this == array);
    };

    // declare the subscritp operator
    int& operator[](int); // return modifiable lvalue for caller
    int operator[](int) const; // return the non modifiable rvalue to caller

private:
    size_t size;
    int* ptr;

};

#endif