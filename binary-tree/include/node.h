#ifndef NODE_H
#define NODE_H

#include <vector>
using namespace std;

template <typename E>
class Node
{

  private:
    E value;
    Node<E> *parent;
    Node<E> *rightChild;
    Node<E> *leftChild;

  public:
    Node(E value, Node<E> *parent, Node<E> *leftChild, Node<E> *rightChild);
    Node(E value, Node<E> *parent);
    ~Node();

    E getValue();
    Node<E> *getParent();
    Node<E> *getLeftChild();
    Node<E> *getRightChild();

    void setValue(E value);
    void setParent(Node<E> *parent);
    void setLeftChild(Node<E> *leftChild);
    void setRightChild(Node<E> *rightChild);

    bool isRoot();
    bool isLeaf();
    int numChildren();
    Node<E> *getOnlyChild();
    Node<E> *getLeftestNode();
    void replaceChild(Node<E> *original, Node<E> *newOne);

    vector<E> *inOrder(vector<E> *currentList);
};

#endif
