#include "Queue.h"

Queue::Queue() {
    s = nullptr; // empty stack to begin with
    s_size = 0;
}

void Queue::push(int x) {
    pushAux(x); // call private member function
}

int Queue::pop() {
    if (!s_size) return -1; // error, pop called on empty queue

    return popAux(); // call private member function to pop front of queue
}

int Queue::peek() const {
    if (!s_size) return -1; // no elements to peek

    return peekAux(); // call private member function
}

bool Queue::empty() const {
    return s_size == 0; // returns true if there are no elements or nodes in stack
}

void Queue::pushAux(int x) {
    StackNode* new_node = new StackNode(x);

    if (!s) s = new_node;
    else
    {
        new_node->next = s; // store address of current top of stack in next storage compartment of new StackNode
        s = new_node; // assign address of new top of stack to the root of list implementation of stack
    }

    ++s_size; // node added to stack increments size of the stack
}

int Queue::popAux() {
    StackNode* traverse = s, // start traversal at top of stack
             * previous = nullptr;

    while (traverse->next)
    {
        previous = traverse;
        traverse = traverse->next; // traverse list to last node in list
    }

    int front = traverse->value; // return value of "front" of queue
    --s_size; // removing or popping the front reduces the size of the container by one

    if (!previous) {delete s; s = nullptr;} // only one node in stack so previous contains invalid address
    else
    {
        delete traverse; // deallocate memory allocated for the node that traverse points to of contains address of
        previous->next = nullptr; // store nullptr in next pointer of second element in queue
    }

    return front;
}

int Queue::peekAux() const {
    StackNode* traverse = s;

    while (traverse->next) traverse = traverse->next;

    return traverse->value; // return value stored in front element of queue
}