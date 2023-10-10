#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

class Queue {
    private:
        class QNode {
            public:
                int val;
                QNode* next;
                QNode(int iVal, QNode* iNext) : val(iVal), next(iNext) {};
        };

    public:

        Queue(int startingVal);
        ~Queue();
        void enqueue(int val);
        int dequeue();
        int peek();
        int size();
        void clear();
        void print();
        void swap(Queue qToSwap);
        int rear();

};

#endif