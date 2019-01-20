#include "TrieNode.h"
#include "Trie.h"
#include <stack>
#include <iostream>

Trie::Trie(int key)
{
    root = new TrieNode(); // Create a TrieNode struct and assign its address to root
    total = 0; // initialize size of trie prior to adding elements to it
    insert(key);
}

// Modifiers
void Trie::insert(int key)
{
    if (contains(key)) return;

    if (!root) root = new TrieNode();

    if (key == 0 && !root->digits[0])
    {
        root->digits[0] = new TrieNode();
        root->digits[0]->last_digit = true; // indicate a number ends at this node
    }
    else if (key == 0 && root->digits[0]) root->digits[0]->last_digit = true;
    else if (key != 0)
    {
        TrieNode* traverse = root;

        while (key != 0)
        {
            if (!traverse->digits[key%10])
                traverse->digits[key%10] = new TrieNode();
            traverse = traverse->digits[key%10];
            key /= 10;
        }

        traverse->last_digit = true;
    }

    total++; // increment amount of numbers in trie
}

void Trie::remove(int key)
{
    if (!contains(key)) return;

    if (key == 0) root->digits[0]->last_digit = false;
    else
    {
        TrieNode* current = root;

        while (key != 0)
        {
            current = current->digits[key%10];
            key /= 10;
        }

        current->last_digit = false;
    }

    total--; // decrement amount of numbers in trie
}

// Accessors
bool Trie::contains(int key) const
{
    if (!root) return false;
    if (key == 0 && root->digits[0]) return root->digits[0]->last_digit;

    TrieNode* traverse = root;

    while (traverse && key != 0)
    {
        traverse = traverse->digits[key%10];
        key /= 10;
    }

    if (!traverse || !traverse->last_digit) return false;
    else return true;
}

// Function to count the total amount of elements in the Trie using a
// DFS algorithm based on traversing the Trie with a stack
int Trie::numbers() const
{
    if (!root) return 0;

    std::stack<TrieNode*> count_numbers;
    int total_numbers = 0;

    count_numbers.push(root);

    while (!count_numbers.empty())
    {
        TrieNode* top = count_numbers.top(); // get top of stack

        count_numbers.pop(); // remove the top of the stack to process its children or sub tries

        if (top->last_digit) total_numbers++;

        for (int i = 0; i < 10; i++)
            if (top->digits[i]) count_numbers.push(top->digits[i]);
    }

    return total_numbers;
}