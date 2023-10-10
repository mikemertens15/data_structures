#include "headers/linkedList.h"
using namespace std;

LinkedList::LinkedList() {
    size = 0;
    head = new LLNode();
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
            newNode->nextNode = nullptr;
            current->nextNode = newNode;
            size++;        
}
