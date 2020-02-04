#include <iostream>
#include "linked.h"
#include "linked.cpp"
using namespace std;

int main(){
    LinkedBST l1,l2;
    l1.add(l1.root,4);
    l1.add(l1.root,7);
    l1.add(l1.root,6);
    l1.add(l1.root,2);
    l1.add(l1.root,1);
    l1.preorderTraverse(l1.root);
    if(l1.search(5)){
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
    cout<<l1.max(l1.root)<<endl;
    cout<<l1.min(l1.root)<<endl;
    return 0;
    
}