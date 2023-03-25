//
// Created by DELL on 4/18/;
// 2022.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <stdexcept>

using namespace std;

int main(){
    vector<int> values{1, 2, 3, 4, 5, 6, 7};
    vector<int> integers{values.cbegin(), values.cend()};
    // create the ostream iterator
    ostream_iterator<int> output{cout, ", "};

    cout << "vector integers contains : ";
    copy(integers.cbegin(), integers.cend(), output);

    // display the first and last element of the vectr
    cout << "first element of the vector  : " << integers.front()
        << "\nlast element of the vector : " << integers.back() << endl;

    // set the first element of the vector
    integers[0] = 77;
    integers.at(4) = 45;

    integers.insert(integers.cbegin() + 1, 999);
    // copy the value of the vector to cout
    cout << "new integers elements : ";
    copy(integers.cbegin(), integers.cend(), output);

    // erase the elemts
    integers.erase(integers.cbegin());
    cout << "\nnew integer vector : ";
    copy(integers.cbegin(), integers.cend(), output);

    integers.erase(integers.cbegin(), integers.cend());
    cout << "new vector after erase : ";
    copy(integers.begin(), integers.end(), output);

    // fill the integers with the vector values
    integers.insert(integers.cbegin(), values.cbegin(), values.cend());
    copy(integers.begin(), integers.end(), output);

    integers.clear();
    cout << "\ninteger vector is empty : " << integers.empty();
}

