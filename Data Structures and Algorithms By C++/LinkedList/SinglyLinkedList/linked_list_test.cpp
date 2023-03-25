#include<iostream>
#include<string>
#include<stdexcept>
#include "linked_list.h"

using namespace std;

int main(){

    // create new Linked List
    LinkedList<int> newList;
    cout << "List initiated" << endl;
    // newList.printList();
    // add some values to the list
    newList.addToHead(1);
    newList.addToHead(2);
    newList.addToHead(99);
    newList.addToTail(101);
    newList.addToHead(847);
    newList.addToTail(3);
    newList.addToTail(4);
    // print the list
    cout << "\nafter add some values: " << endl;
    newList.printList();
    // delete from the list
    newList.deleteFromHead();
    cout << "\nafter delete from head: " << endl;
    newList.printList();
    newList.deleteFromTail();
    cout << "\nafter delete from tail: " << endl;
    newList.printList();

    newList.deleteElement(99);
    cout << "\nlist after deletion of 99: " << endl;
    newList.printList();

    cout << "search for item 101: " << endl;
    cout << "index of 101 is " << newList.search(3);

    newList.insert(2, 11111);
    cout << "\nlist after insert 111111 at index 2: " << endl;
    newList.printList();

    cout << "\nindex of 3 is : " << newList.index(3) << endl;

    try{
        cout << "\nlist[5] = " << newList[5] << endl; 
    }
    catch (out_of_range& exc){
        cout << exc.what() << endl;
    }

}