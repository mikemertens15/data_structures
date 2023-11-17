#include "headers/tree.h"
using namespace std;

Tree::Tree(int rootVal) {
    root = new TNode(rootVal);
    size = 1;
}

Tree::~Tree() {
    clear();
}

void Tree::insert(int val) {
    TNode* temp = root;
    while (temp != NULL) {
        if (val < temp->val) {
            if (temp->left == NULL) {
                temp->left = new TNode(val);
                size++;
                return;
            }
            temp = temp->left;
        } else {
            if (temp->right == NULL) {
                temp->right = new TNode(val);
                size++;
                return;
            }
            temp = temp->right;
        }
    }
}

