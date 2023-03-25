#include<iostream>
#include <stdexcept>

#ifndef CIRCULAR_LINKED_LIST_H
#define CIRCULAR_LINKED_LIST_H

template<typename T>
class Node{

public:

    Node() : next{0} {} // empty constrcutor
    explicit Node(const T& data, Node<T>* next = 0) 
        :data{data} , next{next}
        {
            // empty body
        }

    // data memebers
    Node<T> *next;
    T data;
};

template<typename T>
class CircularLinkedList{

public:
    // constrcutors
    CircularLinkedList(): tail{0}, size{0} {} // empty constrcutor

    CircularLinkedList(const T& data) : size{1} {
        tail = new Node<T>(data);
    }

    ~CircularLinkedList(){
        
        if (tail == 0) return;

        Node<T> *head = tail->next;
        while (head != tail){
            Node<T>* tmp = head->next;
            delete head;
            head = tmp;
        }
        delete head;
        
    }

    // utility methods
    bool isEmpty() const{
        return tail == 0;
    }

    size_t length() const{
        return size;
    }

    // insertion methods
    void insertToHead(const T& data){

        if (tail == 0){
            tail = new Node<T>(data);
            tail->next = tail;
        }
        else{
            Node<T> *node = new Node<T>(data, tail->next);
            tail->next = node;
        }
        size++;
    }

    void addToTail(const T& data){

        if (tail == 0){
            tail = new Node<T>(data);
            tail->next = tail;
        }
        else{
            Node<T>* node = new Node<T>(data, tail->next);
            tail->next = node;
            tail = node;
        }
        size++;
    }

    // delete methods
    bool deleteFromTail(){

        if (tail == 0) return false;

        if (tail->next == tail){
            delete tail;
            tail = 0;
        }
        else{
            Node<T>* ptr;
            for (ptr = tail->next; ptr->next != tail; ptr = ptr->next); // locate the second final element in the linked list

            ptr->next = tail->next;
            delete tail;
            tail = ptr;
        }
        size--;
        return true;

    }

    bool deleteFromHead(){

        if (tail == 0) return false;

        if (tail->next == tail){
            delete tail;
            tail = 0;
        }
        else{
            Node<T>* head = tail->next;
            tail->next = head->next;
            delete head;
        }
        size--;
        return true;
    }

    // print the list
    void printList() const{

        if (isEmpty()){
            std::cout << "List is Empty" << std::endl;
        }

        for (Node<T>* node{tail->next}; node != tail; node = node->next){
            std::cout << node->data << ", ";
        }
        std::cout << std::endl;

    }

private:
    Node<T>* tail;
    size_t size;
};

#endif