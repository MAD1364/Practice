#include <iostream>
#include <unordered_map> // unordered_map data structure which is like a hashtable
                         // but can be used to store key-value pairs like
                         // with dictionaries in python (maybe, they're the same?)
                         // Need to learn the underlying data structures, probably
                         // some kind of graph like a m-ary tree implemented like
                         // heaps using arrays. Given the iterator seems to be used
                         // like a pointer, perhaps, the main data structure is an
                         // array of pointers and the "buckets" are lists or the
                         // m-ary trees to access the elements in relatively
                         // constant time ( O(n) ).

int main()
{
    // list or array of numbers to determine the element that occurs
    // most frequently from
    int list_nums[] = {1, 2, 3, 2, 3, 2, 1, 2, 1, 1, 2, 3, 3, 1, 3, 3, 2, 2},
        most_frequent = 0,
        cnt = 0;

    // create unordered_map data structure object
    std::unordered_map<int, int> mostFrequent;

    // create iterator object to iterate over the elements of the
    // unordered_map object (presumably a point) based on its usage
    std::unordered_map<int, int>::iterator iter;

    // create a pair object (structure with two elements, first and
    // second) to store the elements of the elements of unordered_map
    std::pair<int, int> new_pair;

    for (int i = 0; i < 18; i++)
    {
        // Determine whether the i-th element of the given array is
        // used as a key in the unordered_map; finds based on an
        // element's key
        if (mostFrequent.find(list_nums[i]) == mostFrequent.end())
        {
            // make_pair is a member function of this object that
            // allows one to create an object with list_nums[i] as
            // the object's first element and 1, the second argument
            // as the pair's second element
            new_pair = std::make_pair(list_nums[i], 1);
            mostFrequent.insert(new_pair);
        }
        else
        {
            // if the key corresponding to the current element of
            // list_nums[i] has already been used for an element of
            // the unordered_map, increment the value of the second
            // variable of the pair
            mostFrequent[list_nums[i]] += 1;
            // unordered_map can be indexed using the keys of its
            // key-value pair elements, similar to dictionaries in
            // python
        }
    }

    // Iterate over the elements of the unordered_map data structure
    // in order to find the element whose key corresponds to the
    // highest value. The key of this element represents the element
    // of the given array whose distribution is greatest
    //    unordered_map::begin(): pointer to the beginning element
    //    unordered_map::end()  : pointer to the last element
    for (iter = mostFrequent.begin(); iter != mostFrequent.end(); iter++)
    {
        if (iter->second > cnt)
        {
            // Access the object's value
            cnt = iter->second;
            // Access the object's key
            most_frequent = iter->first;
        }
    }

    std::cout << "Most Frequent (greatest distribution): "
              << most_frequent << "\n";

    return 0;
}