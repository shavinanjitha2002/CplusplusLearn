//
// Created by DELL on 4/30/2022.
//
#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
#include <vector>
using namespace std;

template <typename T> void printList(const list<T>& listRef);

int main(){
    list<int> values;
    list<int> otherValues;

    values.push_back(1);
    values.push_back(2);
    values.push_front(3);
    values.push_front(4);
    cout << "values contains : ";
    printList(values);

    values.sort(); // sort the values
    cout << "\nvalues after sorted : ";
    printList(values);

    vector<int> tempInts{4, 5, 8, 6};
    otherValues.insert(otherValues.cbegin() , tempInts.cbegin(), tempInts.cend());
    cout << "\nother values after insert : ";
    printList(otherValues);

    values.splice(values.cend(), otherValues);
    cout << "\nafter splice the values : ";
    printList(values);

//    values.assign(otherValues.cbegin() , otherValues.cend());
//    cout << "after assign values to values : ";
//    printList(values);

    otherValues.push_front(999);
    values.merge(otherValues);
    cout << "\nvalues after merge : ";
    printList(values);

    values.remove(4);
    cout << "\nvalues after remove 4 : ";
    printList(values);


}


template <typename T> void printList(const list<T>& listRef){
    if (listRef.empty()){
        cout << "List is empty";
    }
    else{
        ostream_iterator<int> output{cout, ", "};
        copy(cbegin(listRef), cend(listRef), output);
    }
}