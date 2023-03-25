#include<stdexcept>

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

template<typename T>
class Node{

public:

    Node() {
        nextPtr = nullptr;
    } // default constructor

    explicit Node(const T& data, Node<T>* next = nullptr){
        this->data = data;
        nextPtr = next;
    }

    // node data members
    T data;
    Node<T> *nextPtr; // pointer to the netx Node
};

template<typename T>
class LinkedList{

public:
    // constructors
    LinkedList() : head{nullptr}, tail{nullptr}, size{0} {
        // empty body
    }

    explicit LinkedList(const T& data): size{1} {
        head = tail = new Node<T>(data);
    }

    ~LinkedList() {
        
        if (isEmpty()) return;

        Node<T>* currentPtr{head};
        while (currentPtr->nextPtr != 0){
            Node<T>* temp = currentPtr;
            currentPtr = currentPtr->nextPtr;
            delete temp;
        }
        delete currentPtr;
        head = tail = 0;
        size = 0;

    }

    bool isEmpty() const{
        return head == nullptr;
    }

    size_t length() const{
        return size;
    }

    // insertion methods
    void addToHead(const T& data){

        if (head == nullptr){
            head = new Node<T>(data);
            tail = head;
        }
        else{
            Node<T>* newNode{new Node<T>(data, head)};
            head = newNode;
        }
        size++;

    }

    void addToTail(const T& data){

        Node<T>* newNode{new Node<T>(data)};
        if (tail == 0){
            tail = head = newNode;
        }
        else{
            tail->nextPtr = newNode;
            tail = newNode;
        }
        size++;

    }
    
    // deletetion methods
    bool deleteFromHead() {
        if (isEmpty())
            return false;
        
        Node<T>* deleteNode{head};
        if (head == tail){
            head = tail = nullptr;
        }
        else{
            head = head->nextPtr;
        }
        delete deleteNode;
        size--;
        return true;
    }

    bool deleteFromTail(){
        if (isEmpty()) 
            return false;

        if (head == tail){
            delete head;
            head = tail = 0;
        }
        else{
            // find the last Node
            Node<T>* currentPtr{head};
            while (currentPtr->nextPtr != tail){
                currentPtr = currentPtr->nextPtr;
            }
            delete tail;
            tail = currentPtr;
            tail->nextPtr = 0;
        }
        size--;
        return true;
    }

    bool deleteElement(const T data){

        if (isEmpty()) return false;
        
        if (head == tail && head->data == data){
            delete head;
            head = tail = 0;
            size--;
            return true;
        }
        else{

            if (head->data == data){
                return deleteFromHead();
            }
            else if (tail->data == data){
                return deleteFromTail();
            }
            else{
                Node<T>* currentPtr{head}, *prevPtr{head};
                while (currentPtr != 0){
                    if (currentPtr->data == data){
                        prevPtr->nextPtr = currentPtr->nextPtr;
                        delete currentPtr;
                        size--;
                        return true;
                    }
                    prevPtr = currentPtr;
                    currentPtr = currentPtr->nextPtr;
                }
                return false;
            }

        }


    }

    void printList() const{

        if (isEmpty()){
            std::cout << "List is Empty" << std::endl;
        }

            
        Node<T>* currentPtr{head};
        while (currentPtr->nextPtr != 0){
            std::cout << currentPtr->data << ", ";
            currentPtr = currentPtr->nextPtr;
        }
        std::cout << currentPtr->data << std::endl;

    }

    int search(const T& data) const{
        Node<T>* temp;
        int i{0};
        for (temp = head; temp != 0; temp = temp->nextPtr){
            if (temp->data == data){
                return i;
            }
            i++;
        }
        return -1;
    }

    int index(const T& data) const{
        Node<T>* tmp;
        int i{0};
        for (tmp = head; tmp != 0 && tmp->data != data; tmp = tmp->nextPtr , i++);

        if (tmp == 0) return -1;
        else return i;
    }

    bool insert(int index, const T& data){
        if (size < index + 1) return false;

        Node<T>* tmp;
        int i{0};
        for (tmp = head; i != index; tmp = tmp->nextPtr, i++); // find the node which is needed to be updated
        tmp->data = data; // insert the new value;
        return true;
    }

    T& operator[](int index) const{

        if (index + 1 > size){
            throw std::out_of_range("index is out of range");
        }

        Node<T>* temp;
        int i{0};
        for(temp = head; i != index; temp = temp->nextPtr, i++); // find the element need to be returned
        return temp->data;
    }



private:
    Node<T> *head, *tail;
    size_t size = 0;

};

#endif