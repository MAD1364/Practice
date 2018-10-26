#include <iostream>
#include <unordered_map>
#include "Pairs.h"

int reciprocatedPairs(Pairs[], int);

int main()
{
    int numRecPairs = 0,
        arrSize = 10;

    Pairs oneToThree(1, 3);
    Pairs twoToFour(2, 4);
    Pairs threeToOne(3, 1);
    Pairs fiveToOne(5, 1);
    Pairs fourToTwo(4, 2);
    Pairs sixToOne(6, 1);
    Pairs sevenToTwo(7, 2);
    Pairs sevenToThree(7, 3);
    Pairs threeToSeven(3, 7);
    Pairs twoToSeven(2, 7);

    Pairs graph[] = {oneToThree, twoToFour, threeToOne, fiveToOne,
                     fourToTwo, sixToOne, sevenToTwo, sevenToThree,
                     threeToSeven, twoToSeven};

    numRecPairs = reciprocatedPairs(graph, arrSize);

    for (int i = 0; i < arrSize; i++)
        std::cout << "(Source, Destination): (" << graph[i].getSource()
                  << ", " << graph[i].getDestination() << ")\n";

    std::cout << "Total Reciprocated Pairs: " << numRecPairs << "\n";

    return 0;
}

int reciprocatedPairs(Pairs graph[], int elements)
{
    int numRecPairs = 0;

    std::unordered_map<int, int> graphNodes;
    std::pair<int, int> newNode;
    std::unordered_map<int, int>::iterator iter;

    for (int i = 0; i < elements; i++)
    {
        // Find all unique elements of the graph
        // unordered_map::find(T k) searches for an element whose
        // key is is provided as an argument, k.
        if (graphNodes.find(graph[i].getSource()) == graphNodes.end())
        {
            newNode = std::make_pair(graph[i].getSource(), graph[i].getDestination());
            graphNodes.insert(newNode);
        }
    }

    for (iter = graphNodes.begin(); iter != graphNodes.end(); iter++)
        std::cout << iter->first << " " << iter->second << "\n";

    for (int i = 0; i < elements; i++)
    {
        // Using the direct-access operator [] returns the value
        // associated with the key used as an index. If this value is
        // equal to the key of the pair whose value was used as an
        // index, the two object being compared are reciprocated. In
        // other words, the key of one is the value of the other and
        // the value of the first is the key of the other.
        if (graphNodes[graph[i].getDestination()] == graph[i].getSource())
            numRecPairs++;
    }

    return numRecPairs / 2;
}