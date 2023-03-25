#include<stdexcept>

#ifndef DOUBLY_LINKED_LIST
#define DOUBLY_LINKED_LIST

template<typename T>
class Node{

public:

    Node() : next{0}, prev{0} {}

    explicit Node(const T& data, Node<T>* next = 0, Node<T>* prev = 0) 
        : data{data}, next{next}, prev{prev} {
        // empty constructor
    }

    // data members
    Node<T> *next, *prev;
    T data;

};

template<typename T>
class DoublyLinkedList{

public:
    // constructors
    DoublyLinkedList() : head{0}, tail{0}, size{0} {} // empty constructor

    explicit DoublyLinkedList(const T& data) : size{1} {
        head = tail = new Node<T>(data);
    }
    // destructor
    ~DoublyLinkedList() {
        
        if (isEmpty()) return;

        for (Node<T> *ptr; !isEmpty();){
            ptr = head->next;
            delete head;
            head = ptr;
        }
    }

    // utility methods
    bool isEmpty() const{
        return head == 0;
    }

    size_t length() const{
        return size;
    }

    // insertion methods
    void addToTail(const T& data){
        if (head == 0){
            head = tail = new Node<T>(data);
        }
        else{
            Node<T>* newNode = new Node<T>(data, 0, tail);
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    void addToHead(const T& data){
        if (head == 0){
            head = tail = new Node<T>(data);
        }
        else{
            Node<T>* newNode = new Node<T>(data, head);
            head->prev = newNode;
            head = newNode;
        }
        size++;
    }

    bool deleteFromTail(){
        if (head == 0) return false;

        if (head == tail){
            delete tail;
            head = tail = 0;
        }
        else{
            Node<T>* node = tail->prev;
            delete tail;
            tail = node;
            tail->next = 0;
        }
        size--;
        return true;


    }

    bool deleteFromHead(){
        if (head == 0) return false;

        if (head == tail){
            delete head;
            head = tail = 0;
        }
        else{
            head = head->next;
            delete head->prev;
            head->prev = 0;
        }
        size--;
        return true;
    }

    bool deleteElement(const T& data){
        if (head == 0) return false;

        if (head == tail && head->data == data){
            delete head;
            head = tail = 0;
        }
        else{
            Node<T>* tmp;
            for(tmp = head; tmp != 0 && tmp->data != data; tmp = tmp->next);

            tmp->prev->next = tmp->next;
            tmp->next->prev = tmp->prev;
            delete tmp;
            
        }
        size--;
        return true;
    }

    void printList() const{
        if (isEmpty()){
            std::cout << "List is Empty" << std::endl;
        }
        else{
            Node<T>* ptr{head};
            while (ptr->next != 0){
                std::cout << ptr->data << ", ";
                ptr = ptr->next; 
            }
            std::cout << ptr->data << std::endl;
        }

    }




private:
    Node<T> *head, *tail;
    size_t size;

};

#endif