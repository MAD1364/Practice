#include <iostream>
#include <unordered_map>

int main()
{
    int numbers[] = {1, 2, 3, 1, 3, 1, 3, 3},
        mostFrequent = 0,
        cnt = 0;

    std::unordered_map<int, int> pairs;
    std::pair<int, int> newPair;

    for (int i = 0; i < 8; i++)
        if (pairs.find(numbers[i]) != pairs.end())
        {
            pairs[numbers[i]] += 1;
            std::cout << pairs[numbers[i]] << std::endl;
        }
        else
        {
            newPair = std::make_pair(numbers[i], 1);
            pairs.insert(newPair);
        }

    std::unordered_map<int, int>::iterator iter;

    for (iter = pairs.begin(); iter != pairs.end(); iter++)
        if (iter->second > cnt)
        {
            cnt = iter->second;
            mostFrequent = iter->first;
        }

    std::cout << "Most Frequent Element: " << mostFrequent << "\n";

    return 0;
}