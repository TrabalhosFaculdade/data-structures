#include "linked-list.h"
#include "node.h"

template <typename T>
void LinkedList<T>::insert(T element)
{
    //TODO this
}

template <typename T>
Node<T> *LinkedList<T>::first()
{
    return this->head;
}

template <typename T>
void LinkedList<T>::remove(Node<T> *node)
{
    //empty list, nothing to remove
    if (this->head == NULL) {
        return;
    }

    //removing head, updating information about the list
    if (this->head->getElement() == node->getElement()) 
    {    
        Node<T> *current = this->head;
        
        this->head = current->getNext();
        delete current;
        return;
    }

    //removing element with a previous reference
    Node<T> *previous = this->head;
    Node<T> *current = this->head->getNext();
    while (current != NULL)
    {
        if (current->getElement() == node->getElement())
        {
            previous->next = current->next;
            delete current;
            return;
        }
    }
}