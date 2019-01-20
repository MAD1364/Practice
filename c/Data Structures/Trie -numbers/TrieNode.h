#ifndef TRIE_NODE_H
#define TRIE_NODE_H

struct TrieNode {
    bool last_digit; // use to determine whether a number ends at this node
    TrieNode* digits[10]; // array to index into using corresponding digit

    TrieNode()
    {
        for (int i = 0; i < 10; i++) digits[i] = nullptr;
        last_digit = false;
    }
};
#endif // TRIE_NODE_H