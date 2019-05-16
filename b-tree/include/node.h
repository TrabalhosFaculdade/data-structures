#ifndef NODE_H
#define NODE_H

#include "keypage.h"

template<typename T>
class KeyPage;

template <typename T>
class Node
{
  private:
    T value;
    KeyPage<T> *leftPage;
    KeyPage<T> *rightPage;

  public:
    Node();
    ~Node();
};

#endif
