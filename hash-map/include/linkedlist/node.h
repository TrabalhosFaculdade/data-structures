#ifndef NODE_H
#define NODE_H

template <typename T>
class Node
{
private:
    T element;
    Node<T> *next;

public:
    Node(T element, Node<T> *next);
    ~Node();
    T getElement();
    Node<T> *getNext();
};

template <typename T>
Node<T>::Node(T element, Node<T> *next)
{
    this->element = element;
    this->next = next;
}

template <typename T>
Node<T>::~Node() {}

template <typename T>
Node<T> *Node<T>::getNext()
{
    return this->next;
}

template <typename T>
T Node<T>::getElement()
{
    return this->element;
}

#endif