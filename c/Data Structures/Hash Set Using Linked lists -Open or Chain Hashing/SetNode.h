#ifndef SET_NODE_H
#define SET_NODE_H

struct SetNode {
    int val; // integer storage compartment to hold value
    SetNode* next; // Pointer to hold the address of the next SetNode struct in list

    SetNode(int x) : val(x), next(nullptr) {} // initialization list to initialize a new node constructed
};

#endif // SET_NODE_H