//
// Created by DELL on 6/5/2022.
//
#include <iostream>
#include "Node.h"

#ifndef DATA_STRUCTURES_LINKEDLIST_H
#define DATA_STRUCTURES_LINKEDLIST_H

// define the template class
template<typename TYPE>
class LinkedList{
public:
    // destructor
    ~LinkedList(){
        // print the destructor is called
        std::cout << "destructor is called." << std::endl;

        // create the temp Node element for hold the current pointer
        Node<TYPE>* temp{nullptr};
        Node<TYPE>* currentPtr{firstPtr};

        if (currentPtr == nullptr){
            std::cout << "successfully destroyed all nodes." << std::endl;
            return;
        }
        while (currentPtr != nullptr){
            temp = currentPtr;
            std::cout << temp->data << " ";
            currentPtr = currentPtr->nextPtr;
            delete temp;
        }

        std::cout << "successfully destroyed all nodes." << std::endl;
    }

    // insertion at back method
    void insert_back(const TYPE& value) {
        // create the new List Node use value
        Node<TYPE>* newPtr{new Node<TYPE>{value}};
        // check if list is empty or not
        if (is_empty()){
            // set the last ptr and first ptr as the new node
            firstPtr = lastPtr = newPtr;
        }
        else{
            // set the last ptr next node as the new ptr
            lastPtr->nextPtr = newPtr;
            lastPtr = newPtr; // update the last ptr
        }
    }

    // insertion at front method
    void insert_front(const TYPE& value){
        // create the new Node using value
        Node<TYPE>* newPtr{new Node<TYPE>{value}};
        // check if list is empty or not
        if (is_empty()){
            // set the last and first ptr as the new ptr
            firstPtr = lastPtr = newPtr;
        }
        else{
            // set the new Ptr next Ptr as the first Ptr
            newPtr->nextPtr = firstPtr;
            firstPtr = newPtr; // update the first ptr
        }
    }
    // delete at back from the list
    bool remove_back(TYPE& value){
        // get the last pointer via the while loop
        Node<TYPE>* temp{firstPtr};
        Node<TYPE>* next{firstPtr};

        if (is_empty()){
            // delete operation has failed and return the boolean false
            return false;
        }
        else{
            while (next != lastPtr){
                temp = next;
                next = next->nextPtr;
            }

            if (temp == next){
                // set the first and last ptr to null pointer
                firstPtr = lastPtr = nullptr;
            }
            else{
                // delete the next object and set the temp next ptr as the null ptr
                temp->nextPtr = nullptr;
                lastPtr = temp;
            }

            delete next; // delete the temp object from memory
        }

        // set the value as temp value
        value = temp->data;
        return true;
    }

    // delete from the front
    bool remove_front(TYPE& value){
        if (is_empty()){
            return false;
        }
        else{
            // hold the first ptr as temp
            Node<TYPE>* temp{firstPtr};
            if (firstPtr == lastPtr){
                firstPtr = lastPtr = nullptr;
            }
            else{
                // set the first as the first next item
                firstPtr = firstPtr->nextPtr;
            }
            // delete the temp object from the memory
            value = temp->data;
            delete temp;
            return true;
        }
    }
    // return if the list is empty
    bool is_empty() const{
        return firstPtr == nullptr;
    }

    void print() const{
        // print the list
        std::cout << "[";
        // use while loop go through the linked list
        Node<TYPE>* currentPtr{firstPtr};
        if (currentPtr != nullptr){
            std::cout << currentPtr->data;
        }
        while (currentPtr != lastPtr){
            currentPtr = currentPtr->nextPtr;
            std::cout << ", " << currentPtr->data;
        }
        // print the close brackets
        std::cout << "]" << std::endl;
    }

private:
    Node<TYPE>* firstPtr{nullptr};
    Node<TYPE>* lastPtr{nullptr};
};

#endif //DATA_STRUCTURES_LINKEDLIST_H
