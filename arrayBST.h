#include "binarytree.h"
#ifndef arrayBST_h
#define arrayBST_h


class ArrayBST:public BinarySearchTree{
private:
    int element[16];

public:

    void preorderTraversal();
    void add(int data);
    bool search(int data);
};
#endif // arrayBST_h
