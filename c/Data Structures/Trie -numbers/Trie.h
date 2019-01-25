#ifndef TRIE_H
#define TRIE

#include "TrieNode.h"
#include <iostream>

class Trie {
public:
    // Constructor
    Trie() : root(nullptr), total(0) {} // empty trie
    Trie(int);
    // Modifiers
    void insert(int);
    void remove(int);
    // Accessors
    bool contains(int) const;
    int numbers() const;
    int size() const {return total;}
    void displayRecursively(std::ostream&, TrieNode*, int, int) const; // used by friend function

    // friend function which has access to all members of class it is a friend of (private and public)
    friend std::ostream& operator<<(std::ostream&, Trie&);

private:
    TrieNode* root;
    int total;
};
#endif // TRIE_H