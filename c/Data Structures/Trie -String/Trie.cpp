#include "TrieNode.h"
#include "Trie.h"
#include <string>

Trie::Trie() {
    root = new TrieNode();
    root->end_of_word = true; // empty Trie with no words ramifying from the root
}

Trie::Trie(std::string word) {
    root = new TrieNode(); // assign address of a TrieNode struct to root of Trie or Prefix Tree

    insert(word); // call member function to insert new word in Trie or Prefix tree
}

void Trie::insert(std::string new_word) {
    if (contains(new_word)) return; // the word already exists in the trie

    if (root->end_of_word) root->end_of_word = false; // Trie with at least one word is not an empty Trie

    int length = new_word.length(); // number of characters in string or character sequence

    TrieNode* build = root; // start adding characters at the root of the Trie

    for (int i = 0; i < length; i++)
    {
        if (!build->branches[new_word[i]])
            build->branches[new_word[i]] = new TrieNode(); // append a new TrieNode struct or object
        build = build->branches[new_word[i]]; // move to next character
    }

    build->end_of_word = true; // set last character node as end of this word
}

void Trie::remove(std::string old_word) {
    if (!contains(old_word)) return; // word does not exist so it cannot be removed

    int length = old_word.length(); // number of characters in string or character sequence

    TrieNode* search = root;

    for (int i = 0; i < length; i++) search = search->branches[old_word[i]];

    search->end_of_word = false; // characters may exist because other words could ramify from it
}

bool Trie::contains(std::string word) const {
    if (!root || root->end_of_word) return false;

    TrieNode* search = root; // start search of word at rootl

    int length = word.length(); // number of characters in string or character sequence

    for (int i = 0; i < length; i++)
    {
        search = search->branches[word[i]];
        if (!search) return false; // full word is not contained in Trie
    }

    return search->end_of_word; // either this nodes represents the last character of a string in Trie or not
}

bool Trie::containsPrefixes(std::string word) const {
    if (!contains(word)) return false;

    int length = word.length(); // number of characters in string or character sequence

    TrieNode* prefix_search = root; // start searching from the root of Trie or Prefix Tree

    for (int i = 0; i < length; i++)
    {
        prefix_search = prefix_search->branches[word[i]]; // traverse Trie to next TrieNode in Trie or Prefix Tree

        if (!prefix_search->end_of_word) return false;
    }

    return true; // if the entire word is traversed and the word exists in Trie, all prefixes exist
}