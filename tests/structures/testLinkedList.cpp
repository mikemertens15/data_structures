// Change file name to allTests or something, and make functions for testing each data structure
// Might get cluncky but we'll see
#include <iostream>
#include <cassert>
#include "../../src/structures/headers/linkedList.h"

void testIsEmpty();
void testAddNode();
void testGet();
void testPrePend();
void testRemove();
void testReplace();
void testClear();
void testReverse();
void testMerge();
void testSort();


int main() {
    return 0;
}

void testIsEmpty() {
    std::cout << "----- Testing isEmpty -----" << std::endl;
    LinkedList list;
    assert(list.isEmpty() == true);
    list.addNode(1);
    assert(list.isEmpty() == false);
}

void testAddNode() {
    std::cout << "----- Testing addNode -----" << std::endl;
    LinkedList list;
    list.addNode(1);
    assert(*list.get(0) == 1);
    list.addNode(2);
    assert(*list.get(1) == 2);
    list.addNode(3);
    assert(*list.get(2) == 3);
}

void testGet() {
    std::cout << "----- Testing get -----" << std::endl;
    LinkedList list;
    list.addNode(1);
    list.addNode(2);
    list.addNode(3);
    assert(*list.get(0) == 1);
    assert(*list.get(1) == 2);
    assert(*list.get(2) == 3);
    assert(list.get(10) == nullptr);
}

void testPrePend() {
    std::cout << "----- Testing prePend -----" << std::endl;
    LinkedList list;
    list.prePend(1);
    assert(*list.get(0) == 1);
    list.prePend(2);
    assert(*list.get(0) == 2);
    assert(*list.get(1) == 1);
    list.prePend(3);
    assert(*list.get(0) == 3);
    assert(*list.get(1) == 2);
    assert(*list.get(2) == 1);
}

void testRemove() {
    std::cout << "----- Testing remove -----" << std::endl;
    LinkedList list;
    list.addNode(1);
    list.addNode(2);
    list.addNode(3);
    list.remove(2);
    assert(*list.get(0) == 1);
    assert(*list.get(1) == 3);
    list.remove(1);
    assert(*list.get(0) == 3);
    list.remove(3);
    assert(list.isEmpty() == true);
}

void testReplace() {
    std::cout << "----- Testing replace -----" << std::endl;
    LinkedList list;
    list.addNode(1);
    list.addNode(2);
    list.addNode(3);
    list.replace(4, 0);
    assert(*list.get(0) == 4);
    list.replace(5, 1);
    assert(*list.get(1) == 5);
    list.replace(6, 2);
    assert(*list.get(2) == 6);
}

void testClear() {
    std::cout << "----- Testing clear -----" << std::endl;
    LinkedList list;
    list.addNode(1);
    list.addNode(2);
    list.addNode(3);
    list.clear();
    assert(list.isEmpty() == true);
}

void testReverse() {
    std::cout << "----- Testing reverse -----" << std::endl;
    LinkedList list;
    list.addNode(1);
    list.addNode(2);
    list.addNode(3);
    list.reverse();
    assert(*list.get(0) == 3);
    assert(*list.get(1) == 2);
    assert(*list.get(2) == 1);
}

void testMerge() {
    std::cout << "----- Testing merge -----" << std::endl;
    LinkedList list1;
    list1.addNode(1);
    list1.addNode(2);
    list1.addNode(3);
    LinkedList list2;
    list2.addNode(4);
    list2.addNode(5);
    list2.addNode(6);
    list1.merge(list2);
    assert(*list1.get(0) == 1);
    assert(*list1.get(1) == 2);
    assert(*list1.get(2) == 3);
    assert(*list1.get(3) == 4);
    assert(*list1.get(4) == 5);
    assert(*list1.get(5) == 6);
}

void testSort() {
    std::cout << "----- Testing sort -----" << std::endl;
    LinkedList list;
    list.addNode(3);
    list.addNode(2);
    list.addNode(1);
    list.sort();
    assert(*list.get(0) == 1);
    assert(*list.get(1) == 2);
    assert(*list.get(2) == 3);
}
