#ifndef TREE_H
#define TREE_H

#include <vector>
#include "node.h"

using namespace std;

template <typename E>
class Tree
{

  private:
	Node<E> *root;

  public:
	Tree(Node<E> *root);
	~Tree();

	Node<E> *getRoot();
	void setRoot (Node<E> *root);

	void insert(Node<E> *node, E value);
	Node<E> *retrieve(Node<E> *node, E value);
	bool isPresent(Node<E> *node, E value);
	bool erase(E value);
	bool erase (Node<E> *node);

	vector<E> *inOrder();
};

#endif
