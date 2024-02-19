#include "../include/Queue.h"
#include "../googletest/googletest/include/gtest/gtest.h"

// Regular Queue tests
TEST(Queue_Test, Constructor) {
    Queue<int> queue;
    ASSERT_TRUE(queue.is_empty());
}

TEST(Queue_Test, enqueue) {
    Queue<int> queue;
    queue.enqueue(10);
    ASSERT_EQ(queue.peek(), 10);
    queue.enqueue(20);
    ASSERT_EQ(queue.peek(), 10);
}

TEST(Queue_Test, dequeue) {
    Queue<int> queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.dequeue();
    ASSERT_EQ(queue.peek(), 20);
}

TEST(Queue_Test, peek) {
    Queue<int> queue;
    queue.enqueue(10);
    ASSERT_EQ(queue.peek(), 10);
    queue.enqueue(20);
    ASSERT_EQ(queue.peek(), 10);
}

TEST(Queue_Test, is_empty) {
    Queue<int> queue;
    ASSERT_TRUE(queue.is_empty());
    queue.enqueue(10);
    ASSERT_FALSE(queue.is_empty());
}

TEST(Queue_Test, size) {
    Queue<int> queue;
    ASSERT_EQ(queue.size(), 0);
    queue.enqueue(10);
    ASSERT_EQ(queue.size(), 1);
    queue.enqueue(20);
    ASSERT_EQ(queue.size(), 2);
}

// Priority Queue tests
TEST(PriorityQueue_Test, Constructor) {
    PriorityQueue<int> queue;
    ASSERT_TRUE(queue.is_empty());
}

TEST(PriorityQueue_Test, enqueue) {
    PriorityQueue<int> queue;
    queue.enqueue(10);
    ASSERT_EQ(queue.peek(), 10);
    queue.enqueue(20);
    ASSERT_EQ(queue.peek(), 10);
    queue.enqueue(5);
    ASSERT_EQ(queue.peek(), 5);
}

TEST(PriorityQueue_Test, dequeue) {
    PriorityQueue<int> queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(5);
    queue.dequeue();
    ASSERT_EQ(queue.peek(), 10);
    queue.dequeue();
    ASSERT_EQ(queue.peek(), 20);
}

TEST(PriorityQueue_Test, peek) {
    PriorityQueue<int> queue;
    queue.enqueue(10);
    ASSERT_EQ(queue.peek(), 10);
    queue.enqueue(20);
    ASSERT_EQ(queue.peek(), 10);
    queue.enqueue(5);
    ASSERT_EQ(queue.peek(), 5);
}

TEST(PriorityQueue_Test, is_empty) {
    PriorityQueue<int> queue;
    ASSERT_TRUE(queue.is_empty());
    queue.enqueue(10);
    ASSERT_FALSE(queue.is_empty());
}

TEST(PriorityQueue_Test, size) {
    PriorityQueue<int> queue;
    ASSERT_EQ(queue.size(), 0);
    queue.enqueue(10);
    ASSERT_EQ(queue.size(), 1);
    queue.enqueue(20);
    ASSERT_EQ(queue.size(), 2);
    queue.enqueue(5);
    ASSERT_EQ(queue.size(), 3);
}
