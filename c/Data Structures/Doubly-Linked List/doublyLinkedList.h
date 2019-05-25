#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

struct Node {
    int val;
    Node* next, // pointer to next node in doubly linked list
        * previous; // pointer to previous node in doubly linked list

    Node(Node* n, Node* p, int v) : next(n), previous(p), val(v) {};
};

class doublyLinkedList {
private:
    Node* head, // use pointer to store address of dummy variable representing head of list
        * tail; // similarly, use a pointer to store address of dummy variable representing tail of list

    int nodes; // use to maintain information about the amount of nodes in the doubly linked list

public:
    doublyLinkedList();
    void display();
    int get(int index);
    void addAtHead(int val);
    void addAtTail(int val);
    void addAtIndex(int index, int val);
    void deleteAtIndex(int index);
};

#endif // DOUBLY_LINKED_LIST_H