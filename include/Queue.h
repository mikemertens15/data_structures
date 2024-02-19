#pragma once
#include <stdexcept>
#include "Node.h"

template<typename T>
class Queue 
{
public:
    Queue() : head(nullptr), tail(nullptr), q_size(0) {}
    ~Queue() {
        while (head != nullptr) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
    }
    void enqueue(T data) {
        Node<T>* temp = new Node<T>(data);
        if (head == nullptr) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
        q_size++;
    }
    void dequeue() {
        if (head == nullptr) {
            throw std::out_of_range("Queue is empty");
        }
        Node<T>* temp = head;
        head = head->next;
        delete temp;
        q_size--;
    }
    T peek() {
        if (head == nullptr) {
            throw std::out_of_range("Queue is empty");
        }
        return head->data;
    }
    bool is_empty() {
        return head == nullptr;
    }
    int size() {
        return q_size;
    }

private:
    Node<T>* head;
    Node<T>* tail;
    int q_size;

};

template<typename T>
class PriorityQueue 
{
public:
    PriorityQueue() : head(nullptr), tail(nullptr), q_size(0) {}
    ~PriorityQueue() {
        while (head != nullptr) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
    }
    void enqueue(T data) {
        Node<T>* temp = new Node<T>(data);
        if (head == nullptr) {
            head = temp;
            tail = temp;
        } else {
            Node<T>* current = head;
            Node<T>* previous = nullptr;
            while (current != nullptr && current->data < data) {
                previous = current;
                current = current->next;
            }
            if (previous == nullptr) {
                temp->next = head;
                head = temp;
            } else if (current == nullptr) {
                tail->next = temp;
                tail = temp;
            } else {
                previous->next = temp;
                temp->next = current;
            }
        }
        q_size++;
    }
    void dequeue() {
        if (head == nullptr) {
            throw std::out_of_range("Queue is empty");
        }
        Node<T>* temp = head;
        head = head->next;
        delete temp;
        q_size--;
    }
    T peek() {
        if (head == nullptr) {
            throw std::out_of_range("Queue is empty");
        }
        return head->data;
    }
    bool is_empty() {
        return head == nullptr;
    }
    int size() {
        return q_size;
    }

    private:
        Node<T>* head;
        Node<T>* tail;
        int q_size;

};