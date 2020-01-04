#ifndef BINARY_H
#define BINARY_H

class Node{
public:
	int data;
	Node* left;
	Node* right;
};
class BinaryTree{
    public:
        virtual void preorderTraverse(Node* root)=0;
        virtual void add(Node* root,int data)=0;
        virtual bool search(int data)=0;
};

#endif