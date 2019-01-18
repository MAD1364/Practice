#include "MyHashSet.h"
#include <cmath>

    void MyHashSet::add(int key) { // when the set is empty, create a new hash_table for the nodes
        if (!capacity) {
            hash_table = new SetNode*[11];
            capacity = 11;

            for (int i = 0; i < 11; i++) hash_table[i] = nullptr;
        }

        if (!contains(key))
        {
            size++; // increment the amount of elements in the set with the addition of a new element

            if (static_cast<float>(size)/capacity > 0.75) // increase size to avoid collisions
                rehash();

            int hash_code = hashCode(key); // get hash code for new element to insert

            hash_table[hash_code] = addAux(key, hash_code); // helper function to add new SetNode struct
        }
    }

    void MyHashSet::remove(int key) {
        if(!capacity) return; // no hash_table has been constructed if the capacity is 0
        int hash_code = hashCode(key); // get index of linked list key is in, if it is in the container

        // no value to return if that key does not map to a linked list
        if (!hash_table || !hash_table[hash_code]) return;

        SetNode* traverse = hash_table[hash_code], // get address of first node in pertaining linked list
               * previous = traverse; // pointer to the node before the node traverse points to

        while (traverse && (traverse->val != key))
        {
            previous = traverse; // previous points to node that precedes node traverse points to
            traverse = traverse->next; // traverse points to next node in linked list
        }

        if (previous == traverse) {hash_table[hash_code] = previous->next; delete previous; size--;}
        else if (traverse) // if traverse contains the address of a valid node, key is found to remove
        {
            previous->next = traverse->next; // connect previous node to node after node traverse points to
            delete traverse; // deallocate noe traverse points to
            size--; // an element removed decreases size or amount of elements in hash_table
        }
        else return; // key was not found in the linked list anchored at hash_code index
    }

    // Returns true if this set contains the specified element
    bool MyHashSet::contains(int key) {
        if (!capacity) return false; // hash_table has not even been created
        int hash_code = hashCode(key); // get index of linked list key belongs

        SetNode* find_key = hash_table[hash_code]; // get anchor or root of linked list key belongs to

        while (find_key) // while find_key contains the address of a valid node
        {
            if (find_key->val == key) return true; // if the value is found in the linked list

            find_key = find_key->next; // traverse linked list
        }

        return false; // if control reaches this statement, hash_table does not contain the value
    }

    // if hash table is relatively full, increase size to decrease collisions
    void MyHashSet::rehash() {
        int new_capacity = getPrime(); // get the new size of the hash table which must be prime

        SetNode** new_hash_table = new SetNode*[new_capacity], // create a new hash table
               ** temp = hash_table;

        for (int i = 0; i < new_capacity; i++) new_hash_table[i] = nullptr; // intialize new array

        hash_table = new_hash_table; // assign address of new hash table to hash set hash table pointer
        int old_capacity = capacity; // need to maintain old capacity to use to iterate through old hash_table
        capacity = new_capacity; // load factor of new hash table reflects state of new hash table

        // add each element in the original hash table to the new hash table
        for (int i = 0; i < old_capacity; i++)
            if (temp[i] != nullptr)
            {
                SetNode* elements = temp[i]; // anchor or root of linked list

                while (elements) // while elements contains the address of SetNode struct
                {
                    SetNode* rem = elements;

                    int hash_code = hashCode(elements->val);
                    hash_table[hash_code] = addAux(elements->val, hash_code);

                    elements = elements->next;

                    delete rem; // deallocate old hash_table SetNode element
                }
            }

        delete temp; // deallocate the old array used as the anchor for linked lists as hash table
    }

    int MyHashSet::getPrime() {
        int prime = 2*capacity + 1; // initialization for finding the least prime greater than 2*capacity
        bool is_prime;

        do
        {
            is_prime = true; // if the current value in prime is prime, while loop exits

            // divide starting with 3 as prime is an odd number and increment by 2 for odd numbers
            for (int i = 3; i <= sqrt(prime); i += 2)
            {
                if (prime%i == 0) is_prime = false; // prime is not prime if it is divisible by i
                prime += 2; // increment prime to next odd number
                break;
            }
        } while (!is_prime); // while a prime number has not been found, continue to search

        return prime;
    }

    int MyHashSet::hashCode(int key) {
        return key%capacity; // remainder when dividing capacity by key. Capacity must be prime number
    }

    // helper function for add to add a new node to a particular list in the hash table of linked lists
    SetNode* MyHashSet::addAux(int key, int hash_code) {
        SetNode* new_key = new SetNode(key); // create a new node to insert in the linked list

        new_key->next = hash_table[hash_code]; // store address of list in next compartment of new node

        return new_key; // return address of new linked list with new node at its root or anchor to hash
    }