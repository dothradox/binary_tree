#ifndef BINARY_H
#define BINARY_H

class Node{
public:
	int data;
	Node* left;
	Node* right;
    Node(){
        data=0;
        left=right=NULL;
    }
};
class BinaryTree{
    public:
        virtual void preorderTraverse(Node* root)=0;
        virtual void add(Node* root,int data)=0;
        virtual bool search(int data)=0;
        virtual int max(Node* root)=0;
        virtual int min(Node* root)=0;
        virtual void deleteBST(Node* root, int keytoDelete)=0;
        virtual void inorderTraverse(Node* root)=0;
};

#endif