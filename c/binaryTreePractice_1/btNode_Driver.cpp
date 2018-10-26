#include <iostream>
#include <cstdlib>
#include "btNode.h"

using namespace std;

int main()
{
    BinaryTree bTree;

    bTree.addNode(7);
    bTree.addNode(8);
    bTree.addNode(9);
    bTree.addNode(10);
    bTree.addNode(70);
    bTree.addNode(71);
    bTree.addNode(72);
    bTree.addNode(73);
    bTree.addNode(74);
    bTree.addNode(1);

    bTree.displayInOrder(cout);
    bTree.displayPreOrder(cout);
    bTree.displayPostOrder(cout);

    if (bTree.removeNode(1))
        cout << "Removed the value specified in the function call.\n";

    int numberOfLessThanSeventy = bTree.countLT70();

    cout << "Amount of values less than seventy in binary tree: "
         << numberOfLessThanSeventy << endl;

    return EXIT_SUCCESS;
}