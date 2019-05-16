#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "listelement.h"

template <typename T>
class LinkedList
{
private:
    ListElement<T> *first;

public:
    LinkedList();
    ~LinkedList();
};

#endif