#include <iostream>
#include <cassert>
#include "../../src/structures/headers/stack.h"

void test_push() {
    std::cout << "----- Testing push -----" << std::endl;
    Stack stack(1);
    stack.push(2);
    assert(stack.peek() == 2);
    stack.push(3);
    assert(stack.peek() == 3);
}

void test_pop() {
    std::cout << "----- Testing pop -----" << std::endl;
    Stack stack(1);
    stack.push(2);
    stack.push(3);
    assert(stack.pop() == 3);
    assert(stack.pop() == 2);
    assert(stack.pop() == 1);
}

void test_peek() {
    std::cout << "----- Testing peek -----" << std::endl;
    Stack stack(1);
    stack.push(2);
    stack.push(3);
    assert(stack.peek() == 3);
    assert(stack.peek() == 3);
    assert(stack.peek() == 3);
}

void test_clear() {
    std::cout << "----- Testing clear -----" << std::endl;
    Stack stack(1);
    stack.push(2);
    stack.push(3);
    stack.clear();
    assert(stack.peek() == 1);
}

void test_reverse() {
    std::cout << "----- Testing reverse -----" << std::endl;
    Stack stack(1);
    stack.push(2);
    stack.push(3);
    stack.reverse();
    assert(stack.peek() == 1);
    assert(stack.pop() == 1);
    assert(stack.pop() == 2);
    assert(stack.pop() == 3);
}