#include <iostream>
#include "binary_tree_node.h"
#include "binary_tree_array.h"

void link_list_check();
void array_check();

int main() {
    std::cout << "Check the dynamic array tree\n";
    array_check();
    std::cout << "\n\nCheck the linked list tree\n";
    link_list_check();

    return 0;
}

void link_list_check(){
    BinaryTree<int> tree;

    tree.insert(7);
    tree.insert(2);
    tree.insert(3);
    tree.insert(4);
    tree.insert(6);
    tree.insert(11);
    tree.insert(8);


    tree.display();
    tree.preOrderDisplay();
    tree.inOrderDisplay();
    tree.postOrderDisplay();
}

void array_check(){
    Tree<int> tree;
    tree.insert(7);
    tree.insert(2);
    tree.insert(3);
    tree.insert(4);
    tree.insert(6);
    tree.insert(11);
    tree.insert(8);

    tree.display();
    tree.preOrderDisplay();
    tree.inOrderDisplay();
    tree.postOrderDisplay();
}
