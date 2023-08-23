//
// Created by lilya on 22.08.2023.
//

#include "../inc/Node.h"

template<typename T>
Node<T>::Node( T data ) {
    this->data = data;
    this->prev = this->next = NULL;
}

template<typename T>
Node<T>::Node() {}