#ifndef STACK_NODE_H
#define STACK_NODE_H

struct StackNode {
    int value; // value storage compartment of Stack nodes
    StackNode* next; // Pointer to next node in list implementation of stack

    StackNode(int x) : value(x), next(nullptr) {}
};

#endif // STACK_NODE_H