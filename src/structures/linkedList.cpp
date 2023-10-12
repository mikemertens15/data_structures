#include "headers/linkedList.h"
using namespace std;

LinkedList::LinkedList() {
    size = 0;
    head = new LLNode();
}

LinkedList::~LinkedList() {
    clear();
}

void LinkedList::clear() {
    while (head != nullptr) {
        LLNode* temp = head;
        head = head->nextNode;
        delete temp;
    }
}

void LinkedList::printList() {
    if (size == 0) {
        cout << "Empty List\n";
            return;
    }
    LLNode* current = head->nextNode;
    while(current->nextNode != nullptr) {
        cout << current->value << " -> ";
        current = current->nextNode;
    }
    cout << current->value << "\n";
}

void LinkedList::addNode(int newVal) {
    LLNode* newNode = new LLNode(newVal);
    LLNode* current = head;
    while (current->nextNode != nullptr) {
        current = current->nextNode;
    }
    current->nextNode = newNode;
    size++;        
}

bool LinkedList::contains(int val) {
    LLNode* current = head;
    while (current != nullptr) {
        if (current->value == val) {
            return true;
        }
        current = current->nextNode;
    }
    return false;
};

void LinkedList::prePend(int val) {

};

int LinkedList::remove(int val) {

};

int LinkedList::get(int position) {

};

void LinkedList::replace(int newVal, int position) {

};

void LinkedList::reverse() {

};

void LinkedList::merge(LinkedList listToMerge) {

};

void LinkedList::sort() {

};
