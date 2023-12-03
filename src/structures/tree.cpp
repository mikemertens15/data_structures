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

int Tree::remove(int valToRemove) {
    TNode* temp = root;
    TNode* parent = NULL;
    while (temp != NULL) {
        if (valToRemove < temp->val) {
            parent = temp;
            temp = temp->left;
        } else if (valToRemove > temp->val) {
            parent = temp;
            temp = temp->right;
        } else {
            if (temp->left == NULL && temp->right == NULL) {
                if (parent == NULL) {
                    root = NULL;
                } else if (parent->left == temp) {
                    parent->left = NULL;
                } else {
                    parent->right = NULL;
                }
                size--;
                return temp->val;
            } else if (temp->left == NULL) {
                if (parent == NULL) {
                    root = temp->right;
                } else if (parent->left == temp) {
                    parent->left = temp->right;
                } else {
                    parent->right = temp->right;
                }
                size--;
                return temp->val;
            } else if (temp->right == NULL) {
                if (parent == NULL) {
                    root = temp->left;
                } else if (parent->left == temp) {
                    parent->left = temp->left;
                } else {
                    parent->right = temp->left;
                }
                size--;
                return temp->val;
            } else {
                TNode* min = temp->right;
                while (min->left != NULL) {
                    min = min->left;
                }
                int minVal = min->val;
                remove(minVal);
                temp->val = minVal;
                return temp->val;
            }
        }
    }
    return -1;
}

bool Tree::search(int val) {
    TNode* temp = root;
    while (temp != NULL) {
        if (val < temp->val) {
            temp = temp->left;
        } else if (val > temp->val) {
            temp = temp->right;
        } else {
            return true;
        }
    }
    return false;
}

int Tree::minimum() {
    TNode* temp = root;
    while (temp->left != NULL) {
        temp = temp->left;
    }
    return temp->val;
}

int Tree::maximum() {
    TNode* temp = root;
    while (temp->right != NULL) {
        temp = temp->right;
    }
    return temp->val;
}

void Tree::inOrderTraversal() {
    
}