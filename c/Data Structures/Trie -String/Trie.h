#ifndef TRIE_H
#define TRIE

#include <string>
#include "TrieNode.h"

class Trie {
public:
    // Constructors
    Trie();
    Trie(std::string);
    // Modifiers
    void insert(std::string);
    void remove(std::string);
    // Accessors
    bool contains(std::string) const;
    bool containsPrefixes(std::string) const;

private:
    TrieNode* root; // root of Trie data structure
};

#endif // TRIE_H