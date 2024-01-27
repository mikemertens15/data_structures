#pragma once

template <typename T>
struct Node
{
    T data;
    Node *next;

    Node(T data) : data(data), next(nullptr) {}
};

template <typename T>
class Stack {
    private:
        Node<T> *head;
        int length;

    public:
    
        Stack() : head(nullptr) {}
        Stack(T data) {
            head = new Node<T>(data);
            length = 1;
        }
};