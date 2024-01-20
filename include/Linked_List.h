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
    int length;

public:
    Linked_List() : head(nullptr) {}

    ~Linked_List()
    {
        Node<T> *current = head;
        while (current != nullptr)
        {
            Node<T> *next = current->next;
            delete current;
            current = next;
        }
    }

    void insert_at_front(T data)
    {
        Node<T> *new_node = new Node<T>(data);
        new_node->next = head;
        head = new_node;
        length++;
    }

    void insert_at_back(T data) 
    {
        Node<T>* new_node = new Node<T>(data);
        if (head == nullptr) {
            head = new_node;
            return;
        }
        Node<T>* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = new_node;
        length++;
    }

    void delete_front()
    {
        Node<T> *temp = head;
        head = head->next;
        delete temp;
    }

    void delete_back()
    {
        Node<T>* current = head;
        while (current->next->next != nullptr) {
            current = current->next;
        }
        Node<T>* temp = current->next;
        current->next = nullptr;
        delete temp;
    }
    void delete_value(T data)
    {
        Node<T>* current = head;
        while (current->next->data != data) {
            current = current->next;
        }
        Node<T>* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }

    Node<T> *search(T data)
    {
        Node<T>* current = head;
        while (current->data != data && current != nullptr) {
            current = current->next;
        }
        return current;
    }

    bool is_empty() { return head == nullptr; }
    T peek_front() { return head->data; }
    T peek_back() 
    {
        Node<T>* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        return current->data;
    }
    int size() { return length;}


};