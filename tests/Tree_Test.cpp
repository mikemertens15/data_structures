#include "../include/BinaryTree.h"
#include <gtest/gtest.h>

TEST(BST_TEST, Constructor) {
    BinarySearchTree<int> bst;
    ASSERT_TRUE(bst.is_empty());
}

TEST(BST_TEST, insert) {
    BinarySearchTree<int> bst;
    bst.insert(10);
    ASSERT_EQ(bst.get_root()->data, 10);
    bst.insert(20);
    ASSERT_EQ(bst.get_root()->right->data, 20);
    bst.insert(5);
    ASSERT_EQ(bst.get_root()->left->data, 5);
    bst.insert(15);
    ASSERT_EQ(bst.get_root()->right->left->data, 15);
}

TEST(BST_TEST, remove) {
    BinarySearchTree<int> bst;
    bst.insert(10);
    bst.insert(20);
    bst.insert(5);
    bst.insert(15);
    bst.remove(5);
    ASSERT_EQ(bst.get_root()->left, nullptr);
    bst.remove(20);
    ASSERT_EQ(bst.get_root()->right->data, 15);
}

TEST(BST_TEST, search) {
    BinarySearchTree<int> bst;
    bst.insert(10);
    bst.insert(20);
    bst.insert(5);
    bst.insert(15);
    ASSERT_EQ(bst.search(5)->data, 5);
    ASSERT_EQ(bst.search(20)->data, 20);
    ASSERT_EQ(bst.search(15)->data, 15);
    ASSERT_EQ(bst.search(10)->data, 10);
    ASSERT_EQ(bst.search(25), nullptr);
}

TEST(BST_TEST, size) {
    BinarySearchTree<int> bst;
    ASSERT_EQ(bst.size(), 0);
    bst.insert(10);
    ASSERT_EQ(bst.size(), 1);
    bst.insert(20);
    ASSERT_EQ(bst.size(), 2);
    bst.insert(5);
    ASSERT_EQ(bst.size(), 3);
    bst.insert(15);
    ASSERT_EQ(bst.size(), 4);
}

TEST(BST_TEST, is_empty) {
    BinarySearchTree<int> bst;
    ASSERT_TRUE(bst.is_empty());
    bst.insert(10);
    ASSERT_FALSE(bst.is_empty());
}