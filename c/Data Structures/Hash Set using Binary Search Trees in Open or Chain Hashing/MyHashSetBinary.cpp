#include "MyHashSetBinary.h"
#include <cmath> // for sqrt() function

    MyHashSetBinary::MyHashSetBinary() {
        initialize(); // call private member function to construct an empty hash set
    }

    void MyHashSetBinary::add(int key) {
        if (contains(key)) return; // hash set contains unique elements only, so don't continue processing add

        size++; // otherwise, add the new element

        if (static_cast<float>(size)/capacity > 0.75) rehash(); // create larger capacity for set to avoid collisions

        addAux(key);
    }

    void MyHashSetBinary::remove(int key) {
        if (!contains(key)) return; // there is no element or node in a bst anchored at the hash table with key

        int hash_code = hashCode(key); // get index of element of hash_table key is a part of

        removeAux(hash_table[hash_code], key); // account for all possible configurations of subtrees of node to remove

        size--; // removing an element decreases the size of the array
    }

    bool MyHashSetBinary::contains(int key) {
        int hash_code = hashCode(key); // get hash code of key, index or position in hash table where element goes

        bstSetNode* find_key = hash_table[hash_code]; // get pointer of root of binary search tree node could be in

        while (find_key && find_key->val != key) // find_key contains valid node pointer and has not found key
        {
            if (key < find_key->val) find_key = find_key->left; //search left sub-tree
            else if (key > find_key->val) find_key = find_key->right; // search right sub-tree
        }

        if (find_key && find_key->val == key) return true;
        else return false; // if control reaches this statement, the value does not exist in this binary search tree
    }

    void MyHashSetBinary::initialize() {
        hash_table = new bstSetNode*[11]; // start off small and rehash as necessary

        for (int i = 0; i < 11; i++) hash_table[i] = nullptr;

        capacity = 11; // total amount of elements that can be contained in the hash set currently
        size = 0; // no elements in the hash set that has just been constructed
    }

    int MyHashSetBinary::hashCode(int key) {
        return key % capacity; // returns remainder when dividing key by capacity (range: 0 - capacity-1)
    }

    int MyHashSetBinary::getPrime() {
        int new_capacity = 2*capacity + 1; // capacity must be prime to assist in decreasing collisions

        bool is_prime;

        do
        {
            is_prime = true; // if the capacity value is prime, there will be no need to perform subsequent iterations

            for (int i = 3; i <= sqrt(new_capacity); i+=2)
                if (new_capacity%i == 0)
                {
                    is_prime = false; // new_capacity is divisible by a number other than 1 and itself
                    new_capacity += 2; // examine next odd number
                    break; // don't continue processing when new_capacity has been determined to be composite
                }
        } while (!is_prime);

        return new_capacity;
    }

    void MyHashSetBinary::rehash() {
        int new_capacity = getPrime(), // get capacity of hash table after resizing
            old_capacity = capacity; // maintain old capacity to process the elements of the current hash_table

        bstSetNode** new_hash_table = new bstSetNode*[new_capacity], // allocate memory for new hash_table
                  ** temp = hash_table; // transfer new_hash_table to hash_table and preserve hash_table

        capacity = new_capacity; // modify MyHashSet's capacity variable to accommodate larger hash_table

        hash_table = new_hash_table; // make MyHashSet hash_table point to new memory for add to work

        for (int i = 0; i < capacity; i++) hash_table[i] = nullptr;

        for (int i = 0; i < old_capacity; i++)
        {
            if (temp[i] != nullptr)
            {
                transferToNewHashTable(temp[i]); // root of binary search tree anchored at hash_table pointer array
            }
        }

        delete temp; // deallocate memory allocate for original hash_table
    }

    void MyHashSetBinary::transferToNewHashTable(bstSetNode*& elements) {
        if (!elements) return;

        transferToNewHashTable(elements->left);
        transferToNewHashTable(elements->right);

        addAux(elements->val); // add value of this node to new hash table

        delete elements; // deallocate memory allocated for this node;
        elements = nullptr; // remove connection to this node
    }

    void MyHashSetBinary::addAux(int key) {
        int hash_code = hashCode(key); // generate hash_code which is an index into hash_table for this element

        bstSetNode* traverse = hash_table[hash_code]; // traverse beginning at root of pertaining binary search tree

        if (!traverse) {hash_table[hash_code] = new bstSetNode(key); return;} // root of new binary search tree

        while (traverse) // otherwise, binary search tree already exists and a new node must be added
        {
            if (key < traverse->val)
            {
                if (!traverse->left) {traverse->left = new bstSetNode(key); break;}
                else traverse = traverse->left;
            }
            else if (key > traverse->val)
            {
                if (!traverse->right) {traverse->right = new bstSetNode(key); break;}
                else traverse = traverse->right;
            }
        }
    }

    void MyHashSetBinary::removeAux(bstSetNode*& root, int key) {
        bstSetNode* current = root,
                  * previous = nullptr; // to compare with current of root of binary search tree contains value to remove

        while (current->val != key) // contains is used prior to removing, so there must be a node with the value to remove
        {
            if (key < current->val) {previous = current; current = current->left;}
            else if (key > current->val) {previous = current; current = current->right;}
        }

        if (!previous) // previous was not moved to a node, thus current contains the address of the first node or root
        {
            if (current->left && current->right) // root has both a left AND right subtree
            {
                root = current->right;
                bstSetNode* traverse = current->right;
                while (traverse->left) traverse = traverse->left;
                traverse->left = current->left;
            }
            else if (current->left) root = current->left; // root has only a left subtree
            else if (current->right) root = current->right; // root has only a right subtree
            else root = nullptr; // root had a single node

            delete current;
        }
        else // previous contains the address of at least the root of the binary search tree under examination
        {
            if (current->left && current->right) // current node has both a left AND right subtree
            {
                if (previous->left == current)
                {
                    previous->left = current->right;
                    bstSetNode* traverse = current->right;
                    while (traverse->left) traverse = traverse->left;
                    traverse->left = current->left;
                }
                else if (previous->right == current)
                {
                    previous->right = current->left;
                    bstSetNode* traverse = current->left;
                    while (traverse->right) traverse = traverse->right;
                    traverse->right = current->right;
                }
            }
            else if (current->left)
            {
                if (previous->left == current) previous->left = current->left;
                else if (previous->right == current) previous->right = current->left;
            }
            else if (current->right)
            {
                if (previous->left == current) previous->left = current->right;
                else if (previous->right == current) previous->right = current->right;
            }
            else
            {
                if (previous->left == current) previous->left = nullptr;
                else if (previous->right == current) previous->right = nullptr;
            }

            delete current;
        }
    }