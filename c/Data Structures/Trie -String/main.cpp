#include <iostream>
#include <vector>
#include "Trie.h"

int main()
{
    Trie dictionary;

    std::vector<std::string> words = {"w", "wo", "wor", "worl", "world"};

    int length = words.size(); // number of words or strings or characters sequences in words vector

    for (int i = 0; i < length; i++) dictionary.insert(words[i]);

    for (int i = 0; i < length; i++)
    {
        if (dictionary.contains(words[i]))
            std::cout << "Contains " << words[i] << std::endl;
    }

    return 0;
}
