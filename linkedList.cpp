#include "headers/linkedList.h"
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
        int size;
    public:
        LinkedList() {
            size = 0;
            head = new LLNode();
        }

        void printList() {
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

        void addNode(int newVal) {
            LLNode* newNode = new LLNode(newVal);
            LLNode* current = head;
            while (current->nextNode != nullptr) {
                current = current->nextNode;
            }
            newNode->nextNode = nullptr;
            current->nextNode = newNode;
            size++;
        }

};

int main() {
    LinkedList myLL = LinkedList();
    myLL.printList();
}