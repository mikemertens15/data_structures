#include "../include/Stack.h"
#include "../googletest/googletest/include/gtest/gtest.h"

TEST(Stack_Test, Constructor) {
    Stack<int> stack;
    ASSERT_TRUE(stack.is_empty());
}

TEST(Stack_Test, push) {
    Stack<int> stack;
    stack.push(10);
    ASSERT_EQ(stack.peek(), 10);
    stack.push(20);
    ASSERT_EQ(stack.peek(), 20);
}

TEST(Stack_Test, pop) {
    Stack<int> stack;
    stack.push(10);
    stack.push(20);
    stack.pop();
    ASSERT_EQ(stack.peek(), 10);
}

TEST(Stack_Test, peek) {
    Stack<int> stack;
    stack.push(10);
    ASSERT_EQ(stack.peek(), 10);
    stack.push(20);
    ASSERT_EQ(stack.peek(), 20);
}

TEST(Stack_Test, is_empty) {
    Stack<int> stack;
    ASSERT_TRUE(stack.is_empty());
    stack.push(10);
    ASSERT_FALSE(stack.is_empty());
}

TEST(Stack_Test, size) {
    Stack<int> stack;
    ASSERT_EQ(stack.size(), 0);
    stack.push(10);
    ASSERT_EQ(stack.size(), 1);
    stack.push(20);
    ASSERT_EQ(stack.size(), 2);
}