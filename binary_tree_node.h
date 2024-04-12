#ifndef BINARY_TREE_NODE_H
#define BINARY_TREE_NODE_H

#include <iostream>

template <class T>
class BinaryTree {
public:
    typedef T value_type;
    BinaryTree();
    ~BinaryTree();
    void insert(value_type);
    void display();
    void preOrderDisplay();
    void inOrderDisplay();
    void postOrderDisplay();

private:
    // Node structure for the binary tree
    struct Node {
        value_type data;
        Node* left;
        Node* right;

        Node(T value) : data(value), left(nullptr), right(nullptr) {}
    };

    Node* root;

    // Private helper functions for insertion and traversal
    void insertHelper(Node*&, value_type);
    void displayHelper(Node*);
    void preOrderHelper(Node*);
    void inOrderHelper(Node*);
    void postOrderHelper(Node*);
    void deleteTree(Node*);
};

#include "binary_tree_node.template"

#endif
