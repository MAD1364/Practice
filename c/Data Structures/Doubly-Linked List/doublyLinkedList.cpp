#include <iostream>
#include "doublyLinkedList.h"

doublyLinkedList::doublyLinkedList() {
        head = new Node(nullptr, nullptr, 0); // head dummy node points to tail dummy variable
        tail = new Node(nullptr, head, 0); // tail dummy node points to head dummy variable

        head->next = tail;

        nodes = 0; // an empty linked list contains no nodes
    }

void doublyLinkedList::display() {
    Node* traverse = head->next;

    while (traverse != tail)
    {
        std::cout << traverse->val << " ";
        traverse = traverse->next;
    }

    std::cout << " Nodes: " << nodes << "\n";
}
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
int doublyLinkedList::get(int index) {
        if (index < 0 || index >= nodes || !nodes) return -1; // invalid index provided as argument

        int n = index+1;
        Node* search = head; // get address of first node in the doubly linked list

        while (n--) search = search->next; // traverse the list to find the index-th node

        return search->val; // return the value once the pertaining node is found
    }

    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
void doublyLinkedList::addAtHead(int val) {
        Node* newNode = new Node(head->next, head, val); // construct a new node that points to the first node after head

        head->next->previous = newNode; // have first node after head node point to new node as its predecessor
        head->next = newNode; // have head point to the new node

        ++nodes; // increase the amount of nodes the doubly-linked list consists of
    }

    /** Append a node of value val to the last element of the linked list. */
void doublyLinkedList::addAtTail(int val) {
        Node* newNode = new Node(tail, tail->previous, val); // construct node that points to tail and tail's predecessor

        tail->previous->next = newNode; // have predecessor of tail node point to new node
        tail->previous = newNode; // have tail node point to new node

        ++nodes;
    }

    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
void doublyLinkedList::addAtIndex(int index, int val) {
        if (index < 0 || index > nodes) return; // index is invalid and a new node will not be inserted

        if (index == nodes) addAtTail(val);
        else
        {
            int n = index+1; // use to determine when the correct position has been found

            Node* search = head;

            while (n--) search = search->next; // position traversal pointer on the node to insert the node after

            Node* newNode = new Node(search, search->previous, val);

            search->previous->next = newNode;
            search->previous = newNode;

            ++nodes;
        }
    }

    /** Delete the index-th node in the linked list, if the index is valid. */
void doublyLinkedList::deleteAtIndex(int index) {
        if (index < 0 || index >= nodes) return; // index provided as argument is invalid

        int n = index+1;

        Node* search = head;

        while (n--) search = search->next; // traverse the doulby-linked list node by node

        search->previous->next = search->next; // have predecessor point to successor
        search->next->previous = search->previous; // have successor point to predecessor

        delete search; // deallocate memory allocated for the index-th node

        --nodes; // decrease the amount of nodes in the doubly-linked list
    }