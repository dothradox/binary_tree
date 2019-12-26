#ifndef LINKED_H
#define LINKED_H
#include "binary.h"
class Node{
	int data;
	Node* left;
	Node* right;
};
class LinkedBST:public BinaryTree{
 private:
 	Node* root;
 public:
 	LinkedBST();
 	~LinkedBST();
 	void preorderTraverse();
 	bool search(int data);
 	void add( Node* root,int data);
};