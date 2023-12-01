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
    size = 0;
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

void LinkedList::prePend(int newVal) {
    LLNode* newNode = new LLNode(newVal, head);
    head = newNode;
};

void LinkedList::remove(int val) {

    // handle empty list
    if (isEmpty()) {
        cout << "List is empty!" << endl;
        return;
    }

    //handle if head is the node to remove
    if (head->value == val) {
        head = head->nextNode;
        size -= 1;
        return;
    }

    LLNode* current = head;
    for (int i=0; i<size; i++) {
        if (current->nextNode->value == val) {
          current->nextNode = current->nextNode->nextNode;
          size -= 1;
          return;
        }
        current = current->nextNode;
    }
    cout << "This node does not exist!" << endl;
};

int* LinkedList::get(int position) {
    LLNode* current = head;
    for (int i=0; i<position; i++) {
        if (!current) return nullptr;
        current = current->nextNode;
    }
    return &(current->value);
};

void LinkedList::replace(int newVal, int position) {
    LLNode* current = head;
    for (int i=0; i<position; i++) {
        if (!current) return;
        current = current->nextNode;
    }
    current->value = newVal;
};

void LinkedList::reverse() {
    LLNode* current = head;
    LLNode* prev = nullptr;
    LLNode* next = nullptr;
    while (current != nullptr) {
        next = current->nextNode;
        current->nextNode = prev;
        prev = current;
        current = next;
        if (current == nullptr) {
            head = prev;
        }
    }
};

void LinkedList::merge(LinkedList* listToMerge) {
    LLNode* current = head;
    while (current->nextNode != nullptr) {
        current = current->nextNode;
    }
    current->nextNode = listToMerge->head;
    size += listToMerge->size;
};

void LinkedList::sort() {
    LLNode* current = head;
    LLNode* next = nullptr;
    while (current != nullptr) {
        next = current->nextNode;
        while (next != nullptr) {
            if (current->value > next->value) {
                int temp = current->value;
                current->value = next->value;
                next->value = temp;
            }
            next = next->nextNode;
        }
        current = current->nextNode;
    }

};
