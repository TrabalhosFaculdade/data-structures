#ifndef HASH_MAP_H
#define HASH_MAP_H

#include "linked-list.h"
#include "entry.h"

template <typename K, typename V>
class HashMap
{
private:
    LinkedList<Entry<K, V>> *values;
    long size;

public:
    V get(K key);
    void insert(K key, V value);
    void remove(K key);

    HashMap(long size);
    ~HashMap();
};

template <typename K, typename V>
HashMap<K, V>::HashMap(long size)
{
    this->size = size;
    this->values = new LinkedList<Entry<K, V>>[size];

    for (long i = 0; i < size; i++)
        this->values[i] = new LinkedList<Entry<K, V>>();
}

template <typename K, typename V>
HashMap<K, V>::~HashMap()
{
    for (long i = 0; i < this->size; i++)
        delete this->values[i];

    delete this->values;
}

#endif