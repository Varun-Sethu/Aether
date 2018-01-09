//
// Created by varun on 5/12/2017.
//


#include "../src/andromeda/Memory/StackAllocator.h"
#include <iostream>

using Aether::Andromeda::StackAllocator;

int main() {

    StackAllocator allocator(10000000);
    void* data = allocator.malloc(sizeof(int), int());

    int* dataVal = (int*) data;
    *dataVal = 7;

    std::cout << *dataVal << std::endl;

    // New allocation
    char *data2 = (char *) (allocator.malloc(sizeof(char), char()));
    *data2 = 'a';

    allocator.free(data2);
    std::cout << *data2 << std::endl;


}
