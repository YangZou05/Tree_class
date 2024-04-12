#ifndef BINARY_TREE_ARRAY_H
#define BINARY_TREE_ARRAY_H

#include <cstddef>

template <class T>
class Tree{
public:
    typedef T value_type;
    typedef size_t size_type;
    static const size_t default_capacity = 100;

    Tree();
    Tree(const Tree&);
    ~Tree();
    Tree& operator=(const Tree&);

    void insert(value_type);
    void deep_copy(const Tree&);
    void expandCapacity();
    void preOrderTraversal(size_type index);
    void inOrderTraversal(size_type index);
    void postOrderTraversal(size_type index);

    void display();
    void preOrderDisplay();
    void inOrderDisplay();
    void postOrderDisplay();


private:
    value_type* tree_array;
    size_type capacity;
    size_type size;
};

#include "binary_tree_array.template"

#endif
