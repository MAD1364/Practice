#include <iostream>
#include "Number_List.h"

NumberList::NumberList() : head(0)
{}

NumberList::~NumberList()
{
    deleteList();
    delete head;
    head = 0;
}

void NumberList::appendNode(int value)
{
    nlNode *newNode = new nlNode;
    newNode->data = value;
    newNode->link = 0;

    if (head == 0)
        head = newNode;
    else
    {
        nlNode *traverse = head;

        while (traverse->link != 0)
            traverse = traverse->link;

        traverse->link = newNode;
    }
}

void NumberList::removeNode(int value)
{
    nlNode *cursor = head,
           *precursor = 0;

    while (cursor != 0 && cursor->data != value)
    {
        precursor = cursor;
        cursor = cursor->link;
    }

    if (cursor == 0)
        return;

    if (cursor == head)
        head = head->link;
    else
        precursor->link = cursor->link;

    delete cursor;
}

void NumberList::insertNode(int value)
{
    nlNode *cursor = head,
           *precursor = 0;

    while (cursor != 0 && cursor->data < value)
    {
        precursor = cursor;
        cursor = cursor->link;
    }

    nlNode *newNode = new nlNode;
    newNode->data = value;
    newNode->link = cursor;

    if (cursor == head)
        head = newNode;
    else
        precursor->link = newNode;
}

void NumberList::deleteList()
{
    nlNode *traverse = head;

    while (traverse != 0)
    {
        head = head->link;
        delete traverse;
        traverse = head;
    }
}

void NumberList::displayNode(ostream& out)
{
    nlNode *traverse = head;

    while (traverse != 0)
    {
        out << traverse->data << " ";
        traverse = traverse->link;
    }
    out << endl << endl;
}

int NumberList::maxNode(nlNode* head)
{
    if (head->link == 0)
        return head->data;
    else
    {
        int next_value = maxNode(head->link);

        return head->data > next_value ? head->data : next_value;
    }
}

NumberList::nlNode* NumberList::listAnchor()
{
    return head;
}