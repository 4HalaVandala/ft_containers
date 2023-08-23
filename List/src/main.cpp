//
// Created by lilya on 23.08.2023.
//
#include "../inc/Node.h"
#include "../inc/CustomList.h"

int main() {
    CustomList<int> lst;
   lst.push_back(1);
   lst.push_back(2);

   std::cout<< lst[1] << std::endl;

    return 0;
}