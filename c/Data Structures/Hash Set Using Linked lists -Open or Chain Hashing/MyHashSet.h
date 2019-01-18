#ifndef MY_HASH_SET_H
#define MY_HASH_SET_H

#include "SetNode.h"

class MyHashSet {
public:
    MyHashSet() : hash_table(nullptr), capacity(0), size(0) {}
    void add(int);
    void remove(int);
    bool contains(int);

private:
    SetNode** hash_table; // pointer to use as a dynamic array whose elements are pointers to SetNode structs
    int capacity; // total amount of elements that can be stored
    int size; // amount of elements currently stored in hash set

    void rehash();
    int getPrime();
    int hashCode(int);
    SetNode* addAux(int, int);
};
#endif // MY_HASH_SET_H