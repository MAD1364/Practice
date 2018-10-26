#ifndef BTNODE
#define BTNODE

#include <iostream>

using namespace std;

class BinaryTree
{
private:
    struct btNode
    {
        int data;
        btNode* left;
        btNode* right;
    };

    btNode* bst_root;

    void addNode(btNode*&, int);
    bool removeNode(btNode*&, int );
    void removeNodeHelper(btNode*&, int&);
    void displayPreOrder(btNode*, std::ostream&);
    void displayInOrder(btNode*, std::ostream&);
    void displayPostOrder(btNode*, std::ostream&);
    int  countLT70(btNode*);
    void clearTree(btNode*&);
    int  numNodes(btNode*);

public:
    BinaryTree()
        { bst_root = 0; }
    ~BinaryTree()
        { clearTree(); bst_root = 0; }
    void addNode(int newValue)
        { addNode(bst_root, newValue); }
    bool removeNode(int removeValue)
        { return removeNode(bst_root, removeValue); }
    void displayPreOrder(std::ostream& out)
        { displayPreOrder(bst_root, out); }
    void displayInOrder(std::ostream& out)
        { displayInOrder(bst_root, out); }
    void displayPostOrder(std::ostream& out)
        { displayPostOrder(bst_root, out); }
    int  countLT70()
        { return countLT70(bst_root); }
    void clearTree()
        { clearTree(bst_root); }
    int  numNodes()
        { return numNodes(bst_root); }
};
#endif