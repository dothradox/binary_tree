#include <iostream>
#include "arrayBST.h"
#define MAX_SIZE 16
using namespace std;


void ArrayBST::preorderTraversal(){}
bool ArrayBST::search(int data){return true;}




void ArrayBST::add(int data){
    for (int i=0;i<16;i++){
        element[i]=0;
    }
    if (this->element[0]==0){
        this->element[1]=data;
        cout<<"added";
    }
    else{
       for(int i=1;i<=MAX_SIZE;){
        if (data<this->element[i]){
            i=2*i;
        }
        else{
            i=2*i+1;
        }
        if (this->element[i]==0){
            this->element[i]=data;
            break;
        }
       }
    }
    this->element[MAX_SIZE]++;
    cout<<"added";
}

int main(){
    ArrayBST a;
    a.add(15);

}

