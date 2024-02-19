#pragma once

template <typename T>
struct Node
{
    T data;
    Node *next;

    Node(T data) : data(data), next(nullptr) {}
};

// Nodes for trees
template <typename T>
struct TreeNode
{
    T data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(T data) : data(data), left(nullptr), right(nullptr) {}
};