
#include <string>
#include <vector>

#include "node.h"
#include "tree.h"

#include <iostream>

using namespace std;

template <typename E>
Tree<E>::Tree(Node<E> *root)
{
    this->root = root;
}

template <typename E>
Tree<E>::~Tree()
{
}

template <typename E>
Node<E> *Tree<E>::getRoot()
{
    return root;
}

template <typename E>
void Tree<E>::setRoot(Node<E> *root)
{
    this->root = root;
}

template <typename E>
void Tree<E>::insert(Node<E> *node, E value)
{
    if (node->getValue() >= value)
    {
        //inserting to the right
        if (node->getRightChild() == NULL)
            node->setRightChild(new Node<E>(value, node, NULL, NULL));
        else
            insert(node->getRightChild(), value);
    }
    else
    {
        //inserting to the left
        if (node->getLeftChild() == NULL)
            node->setLeftChild(new Node<E>(value, node, NULL, NULL));
        else
            insert(node->getLeftChild(), value);
    }
}

template <typename E>
Node<E> *Tree<E>::retrieve(Node<E> *node, E value)
{
    if (node == NULL)
        return NULL; //not found

    if (node->getValue() == value)
        return node; //value found

    //recursivilly searching for value on children
    if (node->getValue() >= value)
        return retrieve(node->getRightChild(), value);
    else
        return retrieve(node->getLeftChild(), value);
}

template <typename E>
bool Tree<E>::isPresent(Node<E> *node, E value)
{
    return retrieve(node, value) == NULL;
}

template <typename E>
bool Tree<E>::erase(E value)
{
    Node<E> *toBeDeleted = retrieve(root, value);
    if (toBeDeleted == NULL)
        return false; //could not remove value, not present

    return erase(toBeDeleted);
}

/**
 * There must be a more efficiente way to do this. * 
*/
template <typename E>
bool Tree<E>::erase(Node<E> *toBeDeleted)
{
    if (toBeDeleted->isLeaf())
    {
        //simply removing from parent, no children
        if (!toBeDeleted->isRoot())
        {
            //not root value, removing from parent
            if (toBeDeleted->getParent()->getRightChild() == toBeDeleted)
                toBeDeleted->getParent()->setRightChild(NULL);
            else
                toBeDeleted->getParent()->setLeftChild(NULL);
        }
        else
        {
            //root value, changing tree state
            root = NULL;
        }
        delete toBeDeleted;
        return true;
    }

    if (toBeDeleted->numChildren() == 1)
    {
        //getting single child and replace toBeDeleted with it
        Node<E> *child = toBeDeleted->getOnlyChild();
        child->setParent(toBeDeleted->getParent());

        if (toBeDeleted->isRoot())
        {
            setRoot(child);
        }
        else
        {
            toBeDeleted->getParent()->replaceChild(toBeDeleted, child);
        }

        delete toBeDeleted;
        return true;
    }

    //game of thrones
    //getting the leftest of the right element to replace node toBeDeleted
    Node<E> *replacementNode = toBeDeleted->getRightChild()->getLeftestNode();
    toBeDeleted->setValue(replacementNode->getValue());

    return erase(replacementNode);
}

template <typename E>
vector<E> *Tree<E>::inOrder()
{
    vector<E> *elements = new vector<E>();
    return root->inOrder(elements);
}