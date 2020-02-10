#ifndef LINKED_H
#define LINKED_H
#include "binary.h"

class LinkedBST:public BinaryTree{
 public:
 	Node* root=new Node();
 	LinkedBST();
 	~LinkedBST();
 	void preorderTraverse(Node* root);
 	bool search(int data);
 	void add(Node* root,int data);
	int max(Node* root);
	int min(Node* root);
	void deleteBST(Node* root,int keytoDelete);
	void inorderTraverse(Node* root);
};
#endif