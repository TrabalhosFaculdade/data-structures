#ifndef LINKED_LIST_ELEMENT_H
#define LINKED_LIST_ELEMENT_H

template <typename T>
class ListElement
{
private:
    ListElement<T> *next;
    ListElement<T> *previous;
    T value;

public:
    ListElement(T value);
    ~ListElement();
};

template <typename T>
ListElement<T>::ListElement(T value)
{
    this->value = value;
}

template <typename T>
ListElement<T>::~ListElement()
{
    //empty, for now
}

#endif