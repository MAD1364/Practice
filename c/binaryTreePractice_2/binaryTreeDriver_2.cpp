#include "btNode.h"
#include <iostream>

using namespace std;

int main()
{
    BinaryTree bTree;

    bTree.addNodeRecursively(4);
    bTree.addNodeRecursively(3);
    bTree.addNodeRecursively(2);
    bTree.addNodeRecursively(1);
    bTree.addNodeRecursively(5);
    bTree.addNodeRecursively(6);
    bTree.addNodeRecursively(7);

    cout << "Pre Order: ";
    bTree.displayPreOrder(cout);
    cout << endl
         << "In Order: ";
    bTree.displayInOrder(cout);
    cout << endl
         << "Post Order: ";
    bTree.displayPostOrder(cout);
    cout << endl << endl;

    bTree.clearTree();

    bTree.addNodeIteratively(4);
    bTree.addNodeIteratively(3);
    bTree.addNodeIteratively(2);
    bTree.addNodeIteratively(1);
    bTree.addNodeIteratively(5);
    bTree.addNodeIteratively(6);
    bTree.addNodeIteratively(7);

    cout << "Pre Order: ";
    bTree.displayPreOrder(cout);
    cout << endl
         << "In Order: ";
    bTree.displayInOrder(cout);
    cout << endl
         << "Post Order: ";
    bTree.displayPostOrder(cout);
    cout << endl << endl;

    if (bTree.removeData(1))
        cout << "Successfully removed 1" << endl;

    cout << "Pre Order: ";
    bTree.displayPreOrder(cout);
    cout << endl
         << "In Order: ";
    bTree.displayInOrder(cout);
    cout << endl
         << "Post Order: ";
    bTree.displayPostOrder(cout);
    cout << endl << endl;

    if (bTree.removeData(4))
        cout << "Successfully removed 4" << endl;

    cout << "Pre Order: ";
    bTree.displayPreOrder(cout);
    cout << endl
         << "In Order: ";
    bTree.displayInOrder(cout);
    cout << endl
         << "Post Order: ";
    bTree.displayPostOrder(cout);
    cout << endl << endl;

    return 0;
}