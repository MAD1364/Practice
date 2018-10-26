#include "btNode.h"
#include <iostream>

using namespace std;

void BinaryTree::addNodeRecursively(btNode*& bst_root, int newValue)
{
    if (bst_root == 0)
    {
        bst_root = new btNode;
        bst_root->value = newValue;
        bst_root->left = bst_root->right = 0;
    }
    else if (bst_root->value > newValue)
        addNodeRecursively(bst_root->left, newValue);
    else if (bst_root->value < newValue)
        addNodeRecursively(bst_root->right, newValue);
    else //if bst_root->value == newValue
        bst_root->value = newValue;
}

void BinaryTree::addNodeIteratively(btNode*& bst_root, int newValue)
{
    btNode* previous;
    btNode* current;

    previous = current = bst_root;

    while (current != 0)
    {
        previous = current;

        if (current->value > newValue)
            current = current->left;
        else if (current->value < newValue)
            current = current->right;
        else //if (current->value == newValue)
        {
            current->value = newValue;
            break;
        }
    }

    btNode* newNode = new btNode;
    newNode->value = newValue;
    newNode->left = newNode->right = 0;

    if (previous == 0)
        bst_root = newNode;
    else
    {
        if (previous->value > newValue)
            previous->left = newNode;
        else //if (previous->value < newValue)
            previous->right = newNode;
    }
}

void BinaryTree::displayPreOrder(btNode* bst_root, ostream& out)
{
    if (bst_root != 0)
    {
        out << bst_root->value << " ";
        displayPreOrder(bst_root->left, out);
        displayPreOrder(bst_root->right, out);
    }
}

void BinaryTree::displayInOrder(btNode* bst_root, ostream& out)
{
    if (bst_root != 0)
    {
        displayInOrder(bst_root->left, out);
        out << bst_root->value << " ";
        displayInOrder(bst_root->right, out);
    }
}

void BinaryTree::displayPostOrder(btNode* bst_root, ostream& out)
{
    if (bst_root != 0)
    {
        displayPostOrder(bst_root->left, out);
        displayPostOrder(bst_root->right, out);
        out << bst_root->value << " ";
    }
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

bool BinaryTree::removeData(btNode*& bst_root, int remValue)
{
    if (bst_root == 0)
        return false;
    else if (bst_root->value > remValue)
        return removeData(bst_root->left, remValue);
    else if (bst_root->value < remValue)
        return removeData(bst_root->right, remValue);
    else //Value to remove, remValue, has been found
    {
        if (bst_root->left != 0 && bst_root->right != 0)
        {
            removeDataAuxilary(bst_root->left, bst_root->value);
        }
        else if (bst_root->left == 0)
        {
            btNode* old_bst_root = bst_root;

            bst_root = bst_root->right;
            delete old_bst_root;
        }
        else if (bst_root->right == 0)
        {
            btNode* old_bst_root = bst_root;

            bst_root = bst_root->left;
            delete old_bst_root;
        }
        else //bst_root->left == 0 && bst_root->right == 0
        {
            delete bst_root;
            bst_root = 0;
        }

        return true;
    }
}

void BinaryTree::removeDataAuxilary(btNode*& bst_root, int& remValue)
{
    if (bst_root->right == 0)
    {
        btNode* old_bst_root = bst_root;

        remValue = bst_root->value;

        bst_root = bst_root->left;
        delete old_bst_root;
    }
    else //bst_root->right != 0 (More right subtrees to traverse)
        removeDataAuxilary(bst_root->right, remValue);
}