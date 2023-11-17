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

        QNode* front;
        QNode* back;
        int size;

    public:

        Queue(int startingVal);
        ~Queue();
        void enqueue(int val);
        int dequeue();
        int peek();
        int length();
        void clear();
        void print();
        int rear();
        void reverse();

};

#endif