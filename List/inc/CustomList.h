//
// Created by lilya on 22.08.2023.
//

#ifndef FT_CONTAINERS_CUSTOMLIST_H
#define FT_CONTAINERS_CUSTOMLIST_H
#include "Node.h"
#include "iostream"

template<typename T>
class CustomList {

public:
    int size;
    Node<T>* head, * tail;

    CustomList();

    void push_back( T data );

    T &operator[](const int index);


};


#endif //FT_CONTAINERS_CUSTOMLIST_H
