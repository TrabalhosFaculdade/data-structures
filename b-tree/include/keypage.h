#ifndef KEY_PAGE_H
#define KEY_PAGE_H

#include "linkedlist.h"
#include "node.h"

template <typename T>
class KeyPage
{
private:
    LinkedList<Node<T>> *values;

public:
    int somethingElse();
};

#endif