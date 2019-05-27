#ifndef ENTRY_H
#define ENTRY_H

template <typename K, typename V>
class Entry
{
private:
    K key;
    V value;

public:
    Entry(K key, V value);
    ~Entry();

    K getKey();
    V getValue();
};

template <typename K, typename V>
K Entry<K, V>::getKey()
{
    return this->key;
}

template <typename K, typename V>
V Entry<K, V>::getValue()
{
    return this->value;
}

#endif