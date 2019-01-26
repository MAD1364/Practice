#ifndef TRIE_NODE_H
#define TRIE_NODE_H

#include <unordered_map> // for unordered_map objects

struct TrieNode {
    bool end_of_word; // use to check if a word ends at this node
    std::unordered_map<char, TrieNode*> branches; // use to ramify words based on the characters they are comprised of

    TrieNode() : end_of_word(false) {}
};

#endif // TRIE_NODE_H