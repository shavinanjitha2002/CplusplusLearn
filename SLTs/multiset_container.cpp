//
// Created by DELL on 4/30/2022.
//
#include <iostream>
#include <algorithm>
#include <iterator>
#include <set>
#include <vector>
using namespace std;

int main(){
    multiset<int ,less<int>> intSet;
    cout << "There are currently " << intSet.count(15) <<
        " values is in the multiset\n";

    intSet.insert(15);
    intSet.insert(15);

    cout << "After insert 15 there are " << intSet.count(15)
        << " values in the multiset\n";

    // find th value 15
    auto results{intSet.find(15)};
    if (results != intSet.end()){
        cout << "Found the 15 in the Set\n";
    }

    results = intSet.find(22);
    if (results == intSet.end()){
        cout << "Not Found the 22 in Set\n";
    }

    vector<int> otherValues{1, 4, 5, 8, 9, 9, 8, 1};
    intSet.insert(otherValues.cbegin(), otherValues.cend());
    // create the ostream iterator
    ostream_iterator<int> output{cout , ", "};
    copy(intSet.begin() , intSet.cend(), output);

    cout << "upper bound of the int set : " <<
        *intSet.upper_bound(15) << "and lower bound of 15 : "
        << *intSet.lower_bound(15) << "\n";
}
