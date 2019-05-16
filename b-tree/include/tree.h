#ifndef TREE_H
#define TREE_H

#include "keypage.h"

template <typename T>
class Tree
{
    private:
        KeyPage<T> *root;
        int order;

    public:
        Tree(int order);
        ~Tree();
        
        void insert (T value);
        void erase (T value);
        bool isPresent (T value);
        Node<T> retrieve (T value);
    };

#endif

template <typename T>
Tree<T>::Tree(int order) {
    this->order = order;
}

template <typename T>
Tree<T>::~Tree() {
    //empty for now
}
