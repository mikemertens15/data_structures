#include <iostream>
#include <cassert>
#include "../../src/structures/headers/tree.h"

void testIsEmpty();
void testInsert();
void testRemove();
void testSearch();
void testMinimum();
void testMaximum();
void testHeight();
void testParent();
void testClear();
void testInOrderTraversal();
void testPreOrderTraversal();
void testPostOrderTraversal();
void testLevelOrderTraversal();

int main() {
    testIsEmpty();
    testInsert();
    testRemove();
    testSearch();
    testMinimum();
    testMaximum();
    testHeight();
    testParent();
    testClear();
    testInOrderTraversal();
    testPreOrderTraversal();
    testPostOrderTraversal();
    testLevelOrderTraversal();
    return 0;
}

void testIsEmpty() {
    Tree tree(5);
    assert(!tree.isEmpty());
    tree.clear();
    assert(tree.isEmpty());
}
