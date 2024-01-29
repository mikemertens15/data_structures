#pragma once

template <typename T>
struct Node
{
    T data;
    Node *next;

    Node(T data) : data(data), next(nullptr) {}
};

template <typename T>
class Stack
{
private:
    Node<T> *head;
    int length;

public:
    // Default Constructor
    Stack() : head(nullptr) {}

    // Constructor with initial value
    Stack(T data)
    {
        head = new Node<T>(data);
        length = 1;
    }

    // Copy Constructor
    Stack(Stack &stack)
    {
    }

    // Move Constructor
    Stack(Stack &&stack)
    {
    }

    // Destructor
    ~Stack()
    {
    }
};