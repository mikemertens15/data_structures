#include "headers/stack.h"
using namespace std;

Stack::Stack(int startingVal) {
    top = new SNode(startingVal, NULL);
    size = 1;
}

Stack::~Stack() {
    clear();
}

void Stack::push(int val) {
    top = new SNode(val, top);
    size++;
}

int Stack::pop() {
    if (size == 0) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    int val = top->val;
    SNode* temp = top;
    top = top->next;
    delete temp;
    size--;
    return val;
}

int Stack::peek() {
    if (size == 0) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    return top->val;
}

void Stack::clear() {
    while (size > 0) {
        pop();
    }
}

void Stack::print() {
    SNode* temp = top;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void Stack::reverse() {
    if (size == 0) {
        cout << "Stack is empty" << endl;
        return;
    }
    SNode* temp = top;
    SNode* prev = NULL;
    SNode* next = NULL;
    while (temp != NULL) {
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    top = prev;
}