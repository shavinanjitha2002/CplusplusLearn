//
// Created by DELL on 6/5/2022.
//

#include <iostream>
#include "LinkedList.h"

using namespace std;

int main(){
    // create the new Linked List
    LinkedList<int> list;
    int value;
    // add the data
    list.insert_back(3);
    list.insert_back(4);
    list.insert_front(2);
    list.insert_front(1);

    // print the list
    list.print();

    // remove from front
    list.remove_front(value);
    list.print(); // print the list again

    list.insert_back(99);
    list.print();
    list.remove_back(value);
    list.print();

}

