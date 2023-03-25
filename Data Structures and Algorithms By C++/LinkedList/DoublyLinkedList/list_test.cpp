#include<iostream>
#include "doubly_linked_list.h"

using namespace std;

int main(){
    DoublyLinkedList<double> newList;

    // insert the values to the list
    newList.addToHead(11.11);
    newList.addToHead(22.22);
    newList.addToTail(33.33);
    newList.addToHead(44.44);
    cout << "list after inserting items: " << endl;
    newList.printList();
    // remove item from the list
    newList.deleteFromHead();
    cout << "list after removing from head: " << endl;
    newList.printList();

    newList.deleteFromTail();
    cout << "list after removig from tail: " << endl;
    newList.printList();

}