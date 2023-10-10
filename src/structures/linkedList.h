#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

class LinkedList {
    private:
        class LLNode {
            public:
                int value;
                LLNode* nextNode;
                LLNode(int val = 0, LLNode* next = nullptr) : value(val), nextNode(next) {};
        };
        LLNode* head;
        int size;
    public:
        LinkedList();
        ~LinkedList();
        void printList();
        void addNode(int newVal);
        void insert(int newVal);
        void prePend(int newVal);
        int remove(int position);
        bool contains(int val);
        void clear();
        int get();
        void set(int newVal);
        void reverse();
        void merge(LinkedList listToMerge);
        void sort();

};

#endif