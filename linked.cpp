#include <iostream>
#include "linked.h"

LinkedBST:LinkedBST(){
	root=NULL;
}
LinkedBST:~LinkedBST(){

}
void LinkedBST::add( Node* root,int data){
	if (root==NULL){
		root->data=data;
	}
	else{
		if(data > root->data)
		{
			if(root->right!= NULL){
				add(root->right,data);
			}
			else{
				Node* new_Node=new Node();
				new_Node->data=data;
				root->right=new_Node; 
			}
			
		}
		else if(data < root->data)
		{
			if(root->left!= NULL)
				add(root->left,data);
			}
			else{
				Node* new_Node=new Node();
				new_Node->data=data;
				root->left=new_Node; 
			}
		}
	}
}
bool LinkedBST::search(int data){
	Node* p=root;
	while(p!NULL){
		if(p->data<data){
			if(p->data!=data){
				p=p->left
			}
			else{
			return true;}
		}
		else{
			if(p->data>data){
			if(p->data!=data){
				p=p->right
			}
			else{
			return true;}
		}
		return false;
	}
}