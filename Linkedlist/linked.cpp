#include <iostream>
#include "linked.h"
#include "binary.h"
using namespace std;

LinkedBST::LinkedBST(){
	root=NULL;
}
LinkedBST::~LinkedBST(){

}
void LinkedBST::add(Node* root,int data){
	if (root==NULL){
		Node* new_Node=new Node();
		new_Node->data=data;
		this->root=new_Node;
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
        cout<<"It is a Null tree"<<endl;
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
		return;
	}
		cout<<root->data<<endl;
	if(root->left!=NULL){
		preorderTraverse(root->left);
	}
	if(root->right!=NULL){
		preorderTraverse(root->right);
	}
	
}
int LinkedBST::max(Node* root){
	if(root==NULL)
	{
		cout<<"the tree is empty"<<endl;
		return 0;
	}
	if(root->right==NULL){
		cout<<"the max number is "<<root->data<<endl;
		return root->data;
	}
	else{
		max(root->right);
	}
	return 0;
}
int LinkedBST::min(Node* root){
	if(root==NULL)
	{
		cout<<"the tree is empty"<<endl;
		return 0;
	}
	if(root->left==NULL){
		cout<<"the min number is "<<root->data<<endl;
		return root->data;
	}
	else{
		min(root->left);
	}
	return 0;
}
void LinkedBST::deleteBST(Node* root,int keytoDelete){
    int dat;
    if(root==NULL){
        cout<<"tree is empty"<<endl;
        return;
    }
    if(keytoDelete<root->data){
        Node* temp=new Node();
        temp=root->left;
        if(root->left->data==keytoDelete && root->left->left==NULL && root->left->right==NULL){
            root->left=NULL;
        }
        deleteBST(temp,keytoDelete);
        return;
    }
    else if(keytoDelete>root->data){
        Node* temp=new Node();
        temp=root->right;
        if(root->right->data==keytoDelete && root->right->left==NULL && root->right->right==NULL){
            root->right=NULL;
        }
        deleteBST(temp,keytoDelete);
        return;
    }
    else{
        if(root->left==NULL && root->right==NULL){
            delete root;
            root=NULL;
            return;
        }
        else if(root->left==NULL){
            Node* temp=new Node();
            temp=root->right;
            root->data=root->right->data;
            root->right=root->right->right;
            delete temp;
            return;
        }
        else if(root->right==NULL){
            Node* temp=new Node();
            temp=root->left;
            root->data=root->left->data;
            root->left=root->left->left;
            delete temp;
            return;
        }
        else{
            Node* nodetoDelete=new Node();
            nodetoDelete=root;
            Node* newNode=new Node();
            newNode=root->left;
            while(newNode->right!=NULL){
                newNode=newNode->right;
            }
            dat=newNode->data;
            deleteBST(nodetoDelete,newNode->data);
            root->data=dat;
            return;
        }
    }
}
void LinkedBST::inorderTraverse(Node* root){
	if(root->left==NULL){
		cout<<root->data<<endl;
	}
	else if(root->left !=NULL){
		inorderTraverse(root->left);
		cout<<root->data<<endl;
	}
 	if(root->right !=NULL){
		inorderTraverse(root->right);
	}
}