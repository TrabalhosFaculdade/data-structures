#include "hash-map.h"
#include "node.h"

template <typename K, typename V>
void HashMap<K, V>::insert(K key, V value)
{
    Entry<K, V> entry = new Entry<K, V>(key, value);

    long hash = key % this->size;
    this->values[hash]->insert(entry);
}

template <typename K, typename V>
V HashMap<K, V>::get(K key)
{
    long hash = key % this->size;
    LinkedList<Entry<K, V>> list = this->values[hash];

    for (Node<Entry<K, V>> *aux = list->head(); aux != NULL; aux = aux->next())
    {
        if (aux->getElement()->getKey() == key)
            return aux->getElement()->getValue();
    }

    return NULL;
}

template <typename K, typename V>
void HashMap<K, V>::remove(K key)
{
    //TODO this
}