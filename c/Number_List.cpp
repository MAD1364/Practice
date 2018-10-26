#include <iostream>
#include "Number_List.h"

NumberList::NumberList() : head(0);

NumberList::~NumberList()
{
    deleteList();
    delete head;
    head = 0;
}

void NumberList::appendNode(int value)
{
    nlNode newNode = new nlNode;
    newNode->data = value;
    newNode->link = 0;

    if (head == 0)
        head = newNode;
    else
    {
        nlNode *traverse = head;

        while (traverse->link != 0)
            traverser = traverse->link;

        traverser->link = newNode;
    }
}

void NumberList::removeNode(int value)
{
    nlNode *cursor = head,
           *precursor = 0;

    while (cursor != 0 && cursor->data != value)
    {
        precursor = cursor;
        cursor = *(cursor).link;
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
        cursor = cursor-link;
    }

    nlNode *newNode = new nlNode;
    newNode->data = value;
    newNode->link = cur;

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

void NumberList::displayNode()
{
    nlNode *traverse = head;

    while (traverse != 0)
    {
        cout << traverse->data << " ";
        traverse = traverse->link;
    }
}

int NumberList::maxNode()
{
    if (head->link == 0)
        return head->data;
    else
        return head->data > maxNode(headPtr->link, value) ? head->data : maxNode(headPtr->link);
}

nlNode* NumberList::listAnchor()
{
    return head;
}