#include <iostream>
#include "linked.h"
#include "linked.cpp"
using namespace std;

int main(){
    LinkedBST l1,l2;
    l1.add(l1.root,5);
    l1.add(l1.root,3);
    l1.add(l1.root,4);
    l1.add(l1.root,7);
    l1.add(l1.root,6);
    l1.add(l1.root,2);
    l1.add(l1.root,1);
    l1.preorderTraverse(l1.root);
    l1.deleteBST(l1.root,6);
    if(l1.search(6)){
        cout<<"number found"<<endl;
    }
    else{
        cout<<"number not found"<<endl;
    }
    if(l1.search(7)){
        cout<<"number found"<<endl;
    }
    else{
        cout<<"number not found"<<endl;
    }
    l1.max(l1.root);
    l1.min(l1.root);
    l1.inorderTraverse(l1.root);
    return 0;
    
}