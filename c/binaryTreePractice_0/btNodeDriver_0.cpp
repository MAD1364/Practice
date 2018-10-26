#include <iostream>
#include <cstdlib>
#include "btNode.h"

//namespace binaryTreeTemplate_0 = binary_tree_template;

using namespace std;
//using namespace binaryTreeTemplate_0;

int main()
{
    btNode<int> binaryTree;

    binaryTree.insert(5);
    binaryTree.insert(8);
    binaryTree.insert(3);
    binaryTree.insert(12);
    binaryTree.insert(9);
    binaryTree.insert(2);
    binaryTree.insert(11);
    binaryTree.insert(13);
    binaryTree.insert(15);
    binaryTree.insert(16);
    binaryTree.insert(17);
    binaryTree.insert(18);

    cout << "Pre-Order traversal: ";
    binaryTree.displayPreOrder();

    cout << endl << "In-Order traversal: ";
    binaryTree.displayInOrder();

    cout << endl << "Post-Order traversal: ";
    binaryTree.displayPostOrder();

    if (binaryTree.isEmpty())
        cout << "\nBinary Tree is empty.\n";
    else
        cout << "\nBinary Tree is not empty.\n";

    cout << "The depth of the binary search tree is "
         << binaryTree.depth() << endl;

    cout << "\nDeleting Binary Tree...\n";
    binaryTree.deleteTree();

    cout << "The depth of the binary search tree is "
         << binaryTree.depth() << endl;

    if (binaryTree.isEmpty())
        cout << "\nSuccessfully deleted binary tree.\n";
    else
        cout << "\nFailed to delete binary tree successfully.\n";

    return EXIT_SUCCESS;
}