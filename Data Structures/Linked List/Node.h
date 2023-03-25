//
// Created by DELL on 6/5/2022.
//

#ifndef DATA_STRUCTURES_NODE_H
#define DATA_STRUCTURES_NODE_H
// first make a list is friend as the Node class
template<typename NODETYPE> class LinkedList;

// create the node class for linked list items
template<typename NODETYPE> class Node{
    friend class LinkedList<NODETYPE>;
public:
    // constructor
    explicit Node(const NODETYPE& data)
        : data{data} , nextPtr{nullptr} {
        // empty constructor
    }

    // getter for data
    NODETYPE& getData() const{ return data;}

private:
    NODETYPE data;
    Node<NODETYPE>* nextPtr;
};

#endif //DATA_STRUCTURES_NODE_H
