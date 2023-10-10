#ifndef TREE_H
#define TREE_H

#include <iostream>

class Tree {
    private:
        class TNode {
            public:
                int val;
                TNode* left;
                TNode* right; // Start as a binary tree, then move on to more, maybe with an array of branches instead of the standard left and right (overload the constructor?)
                TNode(int iVal, TNode* iLeft = nullptr, TNode* iRight = nullptr) : val(iVal), left(iLeft), right(iRight) {};
        };

    public:

        Tree(int root);
        ~Tree();
        void insert(int val); // inserts given value to branch of the tree
        int remove(int valToRemove); // removes element and returns it
        bool search(int val); // returns true if found, and prints path to element
        int minimum(); // returns the smallest element in the tree
        int maximum(); // returns the biggest element in the tree
        int size();
        int height();
        int parent(int valToFind); // returns the parent value of the given node
        void clear();
        void print();
        void inOrderTraversal();
        void preOrderTraversal();
        void postOrderTraversal();
        void levelOrderTraversal();
};

#endif