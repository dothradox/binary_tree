#ifndef BINARY_H
#define BINARY_H

class BinaryTree{
    public:
        virtual void preorderTrasverse()=0;
        virtual void add(int data)=0;
        virtual bool search(int data)=0;
};

#endif