#ifndef STACK_H
#define STACK_H

#include <iostream>

class Stack {
    private:
        class SNode {
            public:
                int val;
                SNode* nextUp;
                SNode(int value, SNode* nextUpNode) : val(value), nextUp(nextUpNode) {};
        };
        SNode* top;
        int size;
    public:
        Stack(int firstVal);
        ~Stack();
        void push(int val);
        int pop();
        int peek();
        void clear();
        void print();
        void reverse();

};

#endif