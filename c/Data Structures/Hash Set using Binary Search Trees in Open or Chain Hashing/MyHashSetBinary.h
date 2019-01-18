#ifndef MY_HASH_SET_BINARY_H
#define MY_HASH_SET_BINARY_H

#include "bstSetNode.h"

class MyHashSetBinary {
public:
    MyHashSetBinary();
    void add(int);
    void remove(int);
    bool contains(int);
private:
    bstSetNode** hash_table;
    int capacity;
    int size;

    void initialize();
    int hashCode(int);
    int getPrime();
    void rehash();
    void transferToNewHashTable(bstSetNode*&);
    void addAux(int);
    void removeAux(bstSetNode*& root, int);
};
#endif // MY_HASH_SET_BINARY_H