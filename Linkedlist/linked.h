#ifndef LINKED_H
#define LINKED_H
#include "binary.h"

class LinkedBST:public BinaryTree{
 public:
 	Node* root=new Node();
 	LinkedBST();
 	~LinkedBST();
 	void preorderTraverse(Node* root1);
 	bool search(int data);
 	void add(Node* root1,int data);
};
#endif