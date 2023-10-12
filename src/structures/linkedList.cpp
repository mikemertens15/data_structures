#include "headers/linkedList.h"
using namespace std;

LinkedList::LinkedList() {
    size = 0;
    head = nullptr;
}

LinkedList::~LinkedList() {
    clear();
}

bool LinkedList::isEmpty() {
    return size == 0;
}

void LinkedList::clear() {
    while (head != nullptr) {
        LLNode* temp = head;
        head = head->nextNode;
        delete temp;
    }
}

void LinkedList::printList() {
    if (isEmpty()) {
        cout << "Empty List\n";
            return;
    }
    LLNode* current = head;
    while(current->nextNode != nullptr) {
        cout << current->value << " -> ";
        current = current->nextNode;
    }
    cout << current->value << "\n";
}

void LinkedList::addNode(int newVal) {
    LLNode* newNode = new LLNode(newVal);
    if (size == 0) {
        head = newNode;
    }
    else {
        LLNode* current = head;
        while (current->nextNode != nullptr) {
            current = current->nextNode;
        }
        current->nextNode = newNode;
    }
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

void LinkedList::remove(int val) {

    if (isEmpty()) {
        cout << "List is empty!" << endl;
        return;
    }

    LLNode* current = head;
    for (int i=0; i<size-1; i++) {
        if (current->nextNode->value == val) {
          current->nextNode = current->nextNode->nextNode;
          // delete current;  
          cout << "Deleted node. New list: ";
          printList();
          return;
        }
        current = current->nextNode;
    }
    cout << "This node does not exist!" << endl;
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
