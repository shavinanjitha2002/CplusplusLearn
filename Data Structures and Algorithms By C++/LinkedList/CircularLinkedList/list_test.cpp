#include<iostream>
#include<string>
#include "circular_linked_list.h"

using namespace std;

int main(){
    CircularLinkedList<string> newList; // create a new circular linked list

    // insert values
    newList.insertToHead("Shavin");
    newList.addToTail("Reshani");
    newList.addToTail("Tharusha");
    newList.insertToHead("Himeth");

    cout << "list after insert values: " << endl;
    newList.printList();

    // delete operations
    newList.deleteFromHead();
    cout << "\nlist after delete from head: " << endl;
    newList.printList();

}