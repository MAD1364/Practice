#include <iostream>
#include "Trie.h"

using namespace std;

int main()
{
    Trie number_trie,
         number_trie_one(777);

    cout << number_trie.numbers() << endl
         << number_trie.size() << endl
         << number_trie_one.numbers() << endl
         << number_trie_one.size() << endl;

    if (number_trie.contains(777)) cout << "1 contains 777\n";
    else cout << "1 does not contain 777\n";

    if (number_trie_one.contains(777)) cout << "2 contains 777\n";
    else cout << "2 does not contain 777\n";

    number_trie.remove(18); // attempt to remove an element that is not contained in the trie
    cout << number_trie.size() << endl;

    number_trie_one.remove(777);
    cout << number_trie_one.size() << endl
         << number_trie_one.numbers() << endl;

    if (number_trie_one.contains(777)) cout << "2 contains 777\n";
    else cout << "2 does not contain 777\n";

    number_trie.insert(18);
    number_trie.insert(2983);
    number_trie.insert(188);
    number_trie.insert(920);
    number_trie.insert(92);
    number_trie.insert(9);
    number_trie.insert(0);

    cout << number_trie.size() << endl
         << number_trie.numbers() << endl << endl;

    if (number_trie.contains(18)) cout << "18\n";
    if (number_trie.contains(2983)) cout << "2983\n";
    if (number_trie.contains(188)) cout << "188\n";
    if (number_trie.contains(920)) cout << "920\n";
    if (number_trie.contains(92)) cout << "92\n";
    if (number_trie.contains(9)) cout << "9\n";
    if (number_trie.contains(0)) cout << "0\n";

    cout << endl << endl
         << "Display elements of Trie using overloaded insertion '<<' operator: " << endl
         << number_trie << endl;

    return 0;
}
