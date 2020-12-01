#include <iostream>
using namespace std;

class LinkedList {
    private:
        class LLNode {
            public:
                int value;
                LLNode* nextNode;
                LLNode(int val=NULL, LLNode* next=nullptr) {
                    value = val;
                    nextNode = next;
                }
        };
        LLNode* head;
        LLNode* tail;
        int size;
    public:
        LinkedList() {
            size = 0;
            head = new LLNode();
            tail = new LLNode();
            head->nextNode = tail;
        }

        void printList() {
            LLNode* current = head->nextNode;
            while(current->value != NULL) {
                cout << current->value << " -> ";
                current = current->nextNode;
            }
        }

        void addNode(int newVal) {
            LLNode newNode = LLNode(newVal);
            LLNode* current = head;
            while (current->nextNode != tail) {
                current = current->nextNode;
            }
            newNode.nextNode = tail;
            current->nextNode = &newNode;
        }

};

int main() {
    LinkedList myLL = LinkedList();
    myLL.addNode(1);
    myLL.printList();
}