#include "btNode.h"
#include <iostream>

using namespace std;

void BinaryTree::addNode(btNode*& bst_root, int newValue)
{
    if (bst_root == 0)
    {
        bst_root = new btNode;
        bst_root->data = newValue;
        bst_root->left = bst_root->right = 0;
    }
    else if (bst_root->data > newValue)
        addNode(bst_root->left, newValue);
    else if (bst_root->data < newValue)
        addNode(bst_root->right, newValue);
    else
        bst_root->data = newValue;
}

bool BinaryTree::removeNode(btNode*& bst_root, int removeValue)
{
    btNode* traversal = bst_root;

    while (traversal != 0 && traversal->data != removeValue)
    {
        if (traversal->data > removeValue)
            traversal = traversal->left;
        else if (traversal->data < removeValue)
            traversal = traversal->right;
    }

    if (traversal == 0) return false;

    if (traversal->left == 0 && traversal->right == 0)
    {
        btNode* old_bst_root = traversal;

    }
    removeNodeHelper(traversal->left, removeValue);
    return true;
}

void BinaryTree::removeNodeHelper(btNode*& bst_root, int& removeValue)
{
    if (bst_root->right != 0)
        removeNodeHelper(bst_root->right, removeValue);
    else
    {
        btNode* old_bst_root = bst_root;
        removeValue = bst_root->data;
        bst_root = bst_root->left;
        delete old_bst_root;
    }
}

void BinaryTree::displayPreOrder(btNode* bst_root, ostream& out)
{
    if (bst_root != 0)
    {
        out << bst_root->data << " ";
        displayPreOrder(bst_root->left, out);
        displayPreOrder(bst_root->right, out);
    }
    //else out << endl;
}

void BinaryTree::displayInOrder(btNode* bst_root, ostream& out)
{
    if (bst_root != 0)
    {
        displayInOrder(bst_root->left, out);
        out << bst_root->data << " ";
        displayInOrder(bst_root->right, out);
    }
    //else out << endl;
}

void BinaryTree::displayPostOrder(btNode* bst_root, ostream& out)
{
    if (bst_root != 0)
    {
        displayPostOrder(bst_root->left, out);
        displayPostOrder(bst_root->right, out);
        out << bst_root->data << " ";
    }
    //else out << endl;
}

int BinaryTree::countLT70(btNode* bst_root)
{
    if (bst_root == 0) return 0;
    if (bst_root->data >= 70)
        return countLT70(bst_root->left);
    else
        return 1 + countLT70(bst_root->left) +
                   countLT70(bst_root->right);
}

void BinaryTree::clearTree(btNode*& bst_root)
{
    if (bst_root != 0)
    {
        clearTree(bst_root->left);
        clearTree(bst_root->right);
        delete bst_root;
        bst_root = 0;
    }
}

int BinaryTree::numNodes(btNode* bst_root)
{
    if (bst_root == 0) return 0;
    else return 1 + numNodes(bst_root->left) +
                    numNodes(bst_root->right);
}