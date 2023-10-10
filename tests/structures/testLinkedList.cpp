#include <iostream>
#include "../../src/structures/linkedList.h"

int main() {
    std::cout << "Testing..." << std::endl;

    LinkedList list;
    list.addNode(5);
    list.addNode(10);
    list.printList();
    return 0;
}