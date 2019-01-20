#ifndef TRIE_H
#define TRIE

#include "TrieNode.h"

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

private:
    TrieNode* root;
    int total;
};
#endif // TRIE_H