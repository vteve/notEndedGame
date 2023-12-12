#ifndef OOP3_HASHNODE_H
#define OOP3_HASHNODE_H

#include <iostream>
#include <vector>
using namespace std;

template <typename K, typename V>
class HashNode {
    K key;
    vector<V> values;
    HashNode *next;
public:
    HashNode(const K &key, const V &value);

    K getKey() const;
    vector<V> getValues() const;
    void addValue(V value);
    HashNode* getNext() const;
    void setNext(HashNode *next);
    void setValues(vector<V>);

};

template<typename K, typename V>
inline HashNode<K, V>::HashNode(const K &key, const V &value)  : key(key), next(nullptr) {
    values.push_back(value);
}

template<typename K, typename V>
K HashNode<K, V>::getKey() const {
    return key;
}

template<typename K, typename V>
vector<V> HashNode<K, V>::getValues() const {
    return values;
}

template<typename K, typename V>
inline void HashNode<K, V>::addValue(V value) {
    values.push_back(value);
}

template<typename K, typename V>
HashNode<K, V>* HashNode<K, V>::getNext() const {
    return next;
}

template<typename K, typename V>
void HashNode<K, V>::setNext(HashNode *next) {
    this->next = next;
}

template<typename K, typename V>
void HashNode<K, V>::setValues(vector<V> newValues) {
    values = newValues;
}



#endif //OOP3_HASHNODE_H
