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
        int length();
        void clear();
        void print();
        int rear();

};

#endif