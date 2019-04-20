
#include <string>
#include <vector>
#include "node.h"

using namespace std;

template <typename E>
Node<E>::Node(E value, Node<E> *parent, Node<E> *leftChild, Node<E> *rightChild)
{
	this->value = value;
	this->parent = parent;
	this->leftChild = leftChild;
	this->rightChild = rightChild;
}

template <typename E>
Node<E>::Node(E value, Node<E> *parent)
{
	this->value = value;
	this->parent = parent;
}

template <typename E>
Node<E>::~Node()
{
}

template <typename E>
E Node<E>::getValue()
{
	return value;
}

template <typename E>
Node<E> *Node<E>::getParent()
{
	return parent;
}

template <typename E>
Node<E> *Node<E>::getLeftChild()
{
	return leftChild;
}

template <typename E>
Node<E> *Node<E>::getRightChild()
{
	return rightChild;
}

template <typename E>
void Node<E>::setValue(E value)
{
	this->value = value;
}

template <typename E>
void Node<E>::setParent(Node<E> *parent)
{
	this->parent = parent;
}

template <typename E>
void Node<E>::setLeftChild(Node<E> *leftChild)
{
	this->leftChild = leftChild;
}

template <typename E>
void Node<E>::setRightChild(Node<E> *rightChild)
{
	this->rightChild = rightChild;
}

template <typename E>
bool Node<E>::isRoot()
{
	return parent == NULL;
}

template <typename E>
bool Node<E>::isLeaf()
{
	return numChildren() == 0;
}

template <typename E>
int Node<E>::numChildren()
{
	int numChildren = 0;

	if (leftChild != NULL)
		numChildren++;

	if (rightChild != NULL)
		numChildren++;

	return numChildren;
}

template <typename E>
Node<E> *Node<E>::getOnlyChild()
{

	if (numChildren() != 1)
		throw new std::string("Trying to get only child, but number of children is different of 1");

	return leftChild != NULL ? leftChild : rightChild;
}

template <typename E>
Node<E> *Node<E>::getLeftestNode()
{
	if (leftChild == NULL)
		return this;

	return leftChild->getLeftestNode();
}

template <typename E>
void Node<E>::replaceChild(Node<E> *original, Node<E> *newOne)
{
	if (leftChild == original)
	{
		leftChild = newOne;
		return;
	}

	if (rightChild == original)
	{
		rightChild = newOne;
		return;
	}

	throw new std::string("Trying to replace child that is not defined in current node");
}

template <typename E>
vector<E> *Node<E>::inOrder(vector<E> *currentList)
{
	if (leftChild != NULL)
		leftChild->inOrder(currentList);
	
	currentList->push_back(value);

	if (rightChild != NULL)
		rightChild->inOrder(currentList);

	return currentList;
}