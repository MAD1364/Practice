#ifndef PAIRS_H
#define PAIRS_H

class Pairs
{
private:
    int source;
    int destination;

public:
    Pairs(int src, int dest)
    {
        source = src;
        destination = dest;
    }

    // Modifiers
    void setSource(int newSource) { source = newSource; }
    void setDestination(int newDestination) { destination = newDestination; }
    // Accessors
    int getSource() { return source; }
    int getDestination() { return destination; }

    // must overload == operator in order to compare when using
    // Pairs objects as keys in hash-type contexts
    bool operator==(const Pairs& other) const
    {
        return  source == other.source && destination == other.destination;
    }
};

#endif