#include <iostream>
#include "linked.h"
#include "linked.cpp"
using namespace std;

int main(){
    LinkedBST l1;
    l1.add(l1.root,4);
    l1.add(l1.root,9);
    l1.add(l1.root,6);
    l1.add(l1.root,2);
    l1.preorderTraverse(l1.root);
    if(l1.search(4)){
        cout<<"number found"<<endl;
    }
    else{
        cout<<"number not found"<<endl;
    }
    return 0;
}