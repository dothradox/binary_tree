#include<iostream>
#include "ArrayBT.h"

BinaryT::BinaryT(){
    std::cout<<"Tree inited\n";
}

void BinaryT::add(int data){
    int indexToAdd = 1;
    Node1* node = new Node1();
    node->data = data;
    node->key = indexToAdd;

    if(isEmpty()){

        addToIndex(indexToAdd,node);
    }else{
        Node1* root = datas[1];
        insert(root, node, root->key);
    }

}


bool BinaryT::isEmpty(){
    return (this->datas[1] == NULL);
}

void BinaryT::insert(Node1* root, Node1* node, int key){
    if(root == NULL){
        node->key = key;
        datas[key] = node;
    }else if(root->data > node->data){

        int leftKey = getLeftChildIndex(root->key);
        Node1* left = datas[leftKey];
        insert(left,node,leftKey);
    }else{

        int rightKey = getRightChildIndex(root->key);
        Node1* right = datas[rightKey];
        insert(right,node,rightKey);
    }
}

void BinaryT::preorderTraversal(){
    std::cout<<"****\n";
    if(isEmpty()) throw "Tree is empty";
    Node1* root = datas[1];
    traverseVLR(root);
    std::cout<<"\n****\n";
} 

void BinaryT::traverseVLR(Node1* root){
    if(root != NULL){
        std::cout << root->data <<" ";
        
        Node1* left = datas[getLeftChildIndex(root->key)];
        traverseVLR(left);
        
        Node1* right = datas[getRightChildIndex(root->key)];
        traverseVLR(right);
    } 
}

        
void BinaryT::addToIndex(int indexToAdd,Node1* node){
    datas[indexToAdd] = node;
}

int BinaryT::getRightChildIndex(int key){
    return 2*key+1;
}

int BinaryT::getLeftChildIndex(int key){
    return 2*key;
}


bool BinaryT::search(int data){
    if(isEmpty()) return false;
    Node1* root = datas[1];
    return findInNode(root, data);
}

bool BinaryT::findInNode(Node1* root, int data){
    if(root == NULL)return false;
    if(root->data == data)return true;
    if(root->data > data){
        Node1* left = datas[getLeftChildIndex(root->key)];
        return findInNode(left,data);
    }else{
        Node1* right = datas[getRightChildIndex(root->key)];
        return findInNode(right,data);
    }
}
