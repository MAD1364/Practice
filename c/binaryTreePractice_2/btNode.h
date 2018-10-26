#ifndef BINARY_TREE
#define BINARY_TREE

#include <iostream>

using namespace std;

class BinaryTree
{
    private:
        struct btNode
        {
            int value;
            btNode* left;
            btNode* right;
        };

        btNode* bst_root;

        void addNodeRecursively(btNode*&, int);
        void addNodeIteratively(btNode*&, int);
        void displayPreOrder(btNode*, std::ostream&);
        void displayInOrder(btNode*, std::ostream&);
        void displayPostOrder(btNode*, std::ostream&);
        void clearTree(btNode*&);
        bool removeData(btNode*&, int);
        void removeDataAuxilary(btNode*&, int&);

    public:
        BinaryTree() //Constructor
        { bst_root = 0; }
        ~BinaryTree() //Destructor
        { clearTree(); }
        void addNodeRecursively(int newValue)
        { addNodeRecursively(bst_root, newValue); }
        void addNodeIteratively(int newValue)
        { addNodeIteratively(bst_root, newValue); }
        void displayPreOrder(std::ostream& out)
        { displayPreOrder(bst_root, out); }
        void displayInOrder(std::ostream& out)
        { displayInOrder(bst_root, out); }
        void displayPostOrder(std::ostream& out)
        { displayPostOrder(bst_root, out); }
        void clearTree()
        { clearTree(bst_root); }
        bool removeData(int remValue)
        { return removeData(bst_root, remValue); }

};
#endif // BINARY_TREE