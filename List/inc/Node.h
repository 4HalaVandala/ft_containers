//
// Created by lilya on 22.08.2023.
//

#ifndef FT_CONTAINERS_NODE_H
#define FT_CONTAINERS_NODE_H
#include "iostream"

template<typename T>
class Node {
public:
    T data;
    Node* prev, * next;

    Node();
    Node(T data);
};


#endif //FT_CONTAINERS_NODE_H
