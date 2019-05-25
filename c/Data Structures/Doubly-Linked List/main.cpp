#include <iostream>
#include "doublyLinkedList.h"

int main()
{
    doublyLinkedList dll; // create a doubly-linked list object (instantiate class)

    dll.addAtHead(89);
    dll.addAtIndex(1, 53);
    dll.addAtTail(6);
    dll.addAtHead(24);
    dll.addAtTail(98);
    dll.addAtTail(77);
    dll.addAtHead(42);
    dll.display();
    std::cout << dll.get(5) << std::endl;
    dll.addAtHead(6);
    dll.addAtHead(12);
    dll.display();
    std::cout << dll.get(9) << std::endl;
    dll.addAtIndex(5, 75);
    dll.addAtHead(92);
    dll.display();
    dll.deleteAtIndex(11);
/*
    dll.addAtHead(5);
    dll.addAtHead(2);
    dll.display();
    dll.deleteAtIndex(1);
    dll.display();
    dll.addAtIndex(1, 9);
    dll.display();
    dll.addAtHead(4);
    dll.display();
    dll.addAtHead(9);
    dll.display();
    dll.addAtHead(8);
    dll.display();
    std::cout << dll.get(3) << "\n\n";
    dll.addAtTail(1);
    dll.display();
    dll.addAtIndex(3, 6);
    dll.display();
    dll.addAtHead(3);
    dll.display();
    /*
    std::cout << "1\n";
    dll.addAtHead(1);
    std::cout << "2\n";
    dll.addAtTail(3);
    std::cout << "3\n";

    dll.display();
    dll.addAtIndex(1, 2);
    dll.display();

    std::cout << dll.get(1) << std::endl;
    dll.deleteAtIndex(1);
    std::cout << dll.get(1) << std::endl;
*/
    return 0;
}