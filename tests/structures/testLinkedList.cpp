// Change file name to allTests or something, and make functions for testing each data structure
// Might get cluncky but we'll see
#include <iostream>
#include "../../src/structures/headers/linkedList.h"

void testLinkedList();
void testStack();
void queue();
void tree();
void graph();


int main() {
    testLinkedList();
    return 0;
}

void testLinkedList() {
    std::cout << "----- Testing Linked List -----" << std::endl;

    LinkedList list;
    list.addNode(5);
    list.addNode(10);
    list.printList();
}

void testStack() {
    std::cout << "----- Testing Stack -----" << std::endl;
}

void testQueue() {
    std::cout << "----- Testing Queue -----" << std::endl;
}

void testTree() {
    std::cout << "----- Testing Tree -----" << std::endl;
}

void testGraph() {
    std::cout << "----- Testing Graph -----" << std::endl;
}