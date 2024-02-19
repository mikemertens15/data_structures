#pragma once

template <typename T>
struct Node
{
    T data;
    Node *next;

    Node(T data) : data(data), next(nullptr) {}
};