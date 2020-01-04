#include <iostream>
#include "linked.h"
using namespace std;

LinkedBST::LinkedBST(){
}
LinkedBST::~LinkedBST(){

}
void LinkedBST::add(Node* root,int data){
	if (root->data==-1){
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
			if(root->left!= NULL){
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
    if(root==NULL){
        std::cout<<"It is a Null tree"<<std::endl;
    }
    else{
        Node *p=new Node();
        p=root;
        while(p!=NULL){
            if(data>p->data){
                p=p->right;
            }
            else if(data<p->data){
                p=p->left;
            }
            else if(data==p->data){
                return true;
            }
            else{
                return false;
            }
        }
    }
    return false;
}

void LinkedBST::preorderTraverse(Node* root){
	if(root==NULL){
		cout<<"There is no value to show"<<endl;
	}
		cout<<root->data<<endl;
	if(root->left!=NULL){
		preorderTraverse(root->left);
	}
	if(root->right!=NULL){
		preorderTraverse(root->right);
	}
	
}