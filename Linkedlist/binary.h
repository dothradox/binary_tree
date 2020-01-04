#ifndef BINARY_H
#define BINARY_H

class Node{
public:
	int data=0;
	Node* left;
	Node* right;
    friend class LinkedBST;
        Node(){
            data=-1;
            left=right=NULL;
        }  
};
class BinaryTree{
    public:
        virtual void preorderTraverse(Node* root)=0;
        virtual void add(Node* root,int data)=0;
        virtual bool search(int data)=0;
};

#endif