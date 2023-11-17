#include "headers/queue.h"
using namespace std;

Queue::Queue(int startingVal) {
    front = new QNode(startingVal, NULL);
    back = front;
    size = 1;
}

Queue::~Queue() {
    clear();
}

void Queue::enqueue(int val) {
    back->next = new QNode(val, NULL);
    back = back->next;
    size++;
}

int Queue::dequeue() {
    if (size == 0) {
        cout << "Queue is empty" << endl;
        return -1;
    }
    int val = front->val;
    QNode* temp = front;
    front = front->next;
    delete temp;
    size--;
    return val;
}

int Queue::peek() {
    if (size == 0) {
        cout << "Queue is empty" << endl;
        return -1;
    }
    return front->val;
}

int Queue::length() {
    return size;
}

void Queue::clear() {
    while (size > 0) {
        dequeue();
    }
}  

void Queue::print() {
    QNode* temp = front;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int Queue::rear() {
    if (size == 0) {
        cout << "Queue is empty" << endl;
        return -1;
    }
    return back->val;
}

void Queue::reverse() {
    if (size == 0) {
        cout << "Queue is empty" << endl;
        return;
    }
    QNode* temp = front;
    QNode* prev = NULL;
    QNode* next = NULL;
    while (temp != NULL) {
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    back = front;
    front = prev;
}