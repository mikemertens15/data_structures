#include <iostream>
#include <cassert>
#include "../../src/structures/headers/queue.h"

void test_enqueue() {
    std::cout << "----- Testing enqueue -----" << std::endl;
    Queue queue(1);
    queue.enqueue(2);
    assert(queue.peek() == 1);
    queue.enqueue(3);
    assert(queue.peek() == 1);
}

void test_dequeue() {
    std::cout << "----- Testing dequeue -----" << std::endl;
    Queue queue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    assert(queue.dequeue() == 1);
    assert(queue.dequeue() == 2);
    assert(queue.dequeue() == 3);
}

void test_peek() {
    std::cout << "----- Testing peek -----" << std::endl;
    Queue queue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    assert(queue.peek() == 1);
    assert(queue.peek() == 1);
    assert(queue.peek() == 1);
}

void test_clear() {
    std::cout << "----- Testing clear -----" << std::endl;
    Queue queue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.clear();
    assert(queue.peek() == 1);
}

void test_rear() {
    std::cout << "----- Testing rear -----" << std::endl;
    Queue queue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    assert(queue.rear() == 3);
    assert(queue.rear() == 3);
    assert(queue.rear() == 3);
}

