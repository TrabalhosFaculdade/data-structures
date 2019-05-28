#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "node.h"

#include <stdlib.h>

template <typename T>
class LinkedList
{
private:
    Node<T> *head;

public:
    LinkedList();
    ~LinkedList();

    Node<T> *first();
    void insert(T element);
    void remove(Node<T>* node);
};

template <typename T>
LinkedList<T>::LinkedList()
{
    this->head = NULL;
}

template <typename T>
LinkedList<T>::~LinkedList() {}

#endif