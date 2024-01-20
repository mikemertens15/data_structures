#pragma once

template <typename T>
struct Node
{
    T data;
    Node *next;

    Node(T data) : data(data), next(nullptr) {}
};

template <typename T>
class Linked_List
{
private:
    Node<T> *head;

public:
    Linked_List() : head(nullptr) {}

    void insert_at_front(T data)
    {
        Node<T> *new_node = new Node<T>(data);
        new_node->next = head;
        head = new_node;
    }
    void delete_value(T data)
    {
    }

    Node<T> *search(T data)
    {
    }

    bool is_empty() { return head == nullptr; }
    T peek_front() { return head->data; }
};