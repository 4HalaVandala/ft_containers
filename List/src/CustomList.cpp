//
// Created by lilya on 22.08.2023.
//

#include "../inc/CustomList.h"

template<typename T>
CustomList<T>::CustomList() {
    this->head = NULL;
    this->size = 0;
}

template<typename T>
void CustomList<T>::push_back( T data ) {

    if ( head == NULL ) {
        head = new Node<T>(data);
    } else {
        Node<T> *curr = this->head;

        while ( curr->next != NULL ) {
            curr = curr->next;
        }

        curr->next = new Node<T>(data);
    }
    size++;
}

template<typename T>
T& CustomList<T>::operator[](const int index) {

    int counter  = 0;
    Node<T> *curr = this->head;

    while (curr != nullptr) {
        if (counter == index) {
            return curr->data;
        }
        curr = curr->next;
        counter++;
    }

}