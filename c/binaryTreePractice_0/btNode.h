#ifndef BTNODE_H
#define BTNODE_H
#include <cstdlib>

using namespace std;

//namespace binary_tree_template
//{
    template <class Item>
    class btNode
    {
    private:
        struct nodes
        {
            Item data;
            nodes* left;
            nodes* right;
        };

        nodes* bst_root;

        void insert(nodes*&, Item);
        void displayPreOrder(nodes*) const;
        void displayInOrder(nodes*) const;
        void displayPostOrder(nodes*) const;
        void deleteTree(nodes*&);
        bool isEmpty(nodes*) const;
        int  depth(nodes*) const;

    public:
        btNode();  //Constructor
        ~btNode(); //Destructor
        int  depth()
        { return depth(bst_root); }
        void insert(Item);
        void displayPreOrder() const
        { displayPreOrder(bst_root); }
        void displayInOrder() const
        { displayInOrder(bst_root); }
        void displayPostOrder() const
        { displayPostOrder(bst_root); }
        void deleteTree();
        bool isEmpty();
    };
//}

#include "btNode.template"

#endif // BTNODE_H