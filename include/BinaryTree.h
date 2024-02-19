#pragma once
#include "Node.h"
#include <stdexcept>

template <typename T>
class BinarySearchTree {
    private:
        TreeNode<T>* root;
        size_t tree_size;

    public:
        BinarySearchTree() : root(nullptr), tree_size(0) {}
        BinarySearchTree(T value) : root(new TreeNode<T>(value)), tree_size(1) {}

        ~BinarySearchTree() {
            while (root != nullptr) {
                remove(root->data);
            }
        }

        void insert(T value) {
            if (root == nullptr) {
                root = new TreeNode<T>(value);
                tree_size++;
            } else {
                TreeNode<T>* current = root;
                while (current != nullptr) {
                    if (value < current->data) {
                        if (current->left == nullptr) {
                            current->left = new TreeNode<T>(value);
                            tree_size++;
                            return;
                        } else {
                            current = current->left;
                        }
                    } else if (value > current->data) {
                        if (current->right == nullptr) {
                            current->right = new TreeNode<T>(value);
                            tree_size++;
                            return;
                        } else {
                            current = current->right;
                        }
                    } else {
                        return;
                    }
                }
            }
        }
        void remove(T value) {
            TreeNode<T>* current = root;
            TreeNode<T>* parent = nullptr;
            while (current != nullptr) {
                if (value < current->data) {
                    parent = current;
                    current = current->left;
                } else if (value > current->data) {
                    parent = current;
                    current = current->right;
                } else {
                    if (current->left == nullptr && current->right == nullptr) {
                        if (parent == nullptr) {
                            root = nullptr;
                        } else if (parent->left == current) {
                            parent->left = nullptr;
                        } else {
                            parent->right = nullptr;
                        }
                        delete current;
                        tree_size--;
                    } else if (current->left == nullptr) {
                        if (parent == nullptr) {
                            root = current->right;
                        } else if (parent->left == current) {
                            parent->left = current->right;
                        } else {
                            parent->right = current->right;
                        }
                        delete current;
                        tree_size--;
                    } else if (current->right == nullptr) {
                        if (parent == nullptr) {
                            root = current->left;
                        } else if (parent->left == current) {
                            parent->left = current->left;
                        } else {
                            parent->right = current->left;
                        }
                        delete current;
                        tree_size--;
                    } else {
                        TreeNode<T>* temp = current->right;
                        while (temp->left != nullptr) {
                            temp = temp->left;
                        }
                        T temp_data = temp->data;
                        remove(temp->data);
                        current->data = temp_data;
                    }
                    return;
                }
            }
        }

        TreeNode<T>* search(T value) {
            TreeNode<T>* current = root;
            while (current != nullptr) {
                if (value < current->data) {
                    current = current->left;
                } else if (value > current->data) {
                    current = current->right;
                } else {
                    return current;
                }
            }
            return nullptr;
        }

        size_t size() { return tree_size; }
        bool is_empty() { return tree_size == 0;}
        TreeNode<T>* get_root() { return root; }
};