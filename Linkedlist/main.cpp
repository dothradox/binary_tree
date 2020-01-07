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
    l2.add(l2.root,8);
    l2.preorderTraverse(l2.root);
    l1.preorderTraverse(l1.root);
    if(l1.search(5)){
        cout<<"number found"<<endl;
    }
    else{
        cout<<"number not found"<<endl;
    }
    if(l2.search(8)){
        cout<<"number found"<<endl;
    }
    else{
        cout<<"number not found"<<endl;
    }
    return 0;
}