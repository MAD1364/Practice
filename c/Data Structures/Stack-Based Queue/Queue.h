#ifndef QUEUE_H
#define QUEUE_H

#include "StackNode.h"

class Queue {
public:
    // Constructor
    Queue();
    // Public Modifiers
    void push(int x);
    int pop();
    // Public Accessors
    int peek() const;
    bool empty() const;

private:
    StackNode* s; // pointers to roots of stack
    int s_size;
    // Private Modifiers
    void pushAux(int x);
    int popAux();
    // Private Accessors
    int peekAux() const;
};

#endif