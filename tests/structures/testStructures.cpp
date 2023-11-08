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

    std::cout << "----- Adding Nodes -----" << std::endl;
    list.addNode(1);
    list.addNode(2);
    list.addNode(3);
    list.printList();

    std::cout << "----- Testing prepend -----" << std::endl;
    list.prePend(0);
    list.printList();

    std::cout << "----- Testing get -----" << std::endl;
    if (list.get(1)) {
        std::cout << "Should be 1: " << *list.get(1) << std::endl;
    } else {
        std::cout << "nullptr, test failed" << std::endl;
    }
    if (list.get(10)) {
        std::cout << "This pointer should be null, test failed" << std::endl;
    } else {
        std::cout << "nullptr confirmed, test success!" << std::endl;
    }
    

    std::cout << "----- Testing contains ------" << std::endl;
    std::cout << "Should be true: ";
    std::cout << list.contains(1) << " " << list.contains(3) << std::endl;
    std::cout << "Should be false: ";
    std::cout << list.contains(4) << " " << list.contains(10) << std::endl;

    std::cout << "----- Testing Remove -----" << std::endl;
    std::cout << "Should print an error: ";
    list.remove(10);
    std::cout<< "Should print a new list: ";
    list.remove(2);

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