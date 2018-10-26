#ifndef NUMBER_LIST_H
#define NUMBER_LIST_H
#include <iostream>

using namespace std;

class NumberList
{
private:
    struct nlNode
    {
        int data;
        nlNode *link;
    };

    nlNode *head;

public:
    NumberList(); //Constructor
    ~NumberList(); //Destructor
    void appendNode(int);
    void removeNode(int);
    void insertNode(int);
    void deleteList();
    void displayNode(ostream&);
    int  maxNode(nlNode*);
    nlNode* listAnchor();
};
#endif // NUMBER_LIST_H