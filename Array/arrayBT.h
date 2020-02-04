#define MAX_SIZE 1000
#include "BinaryTree.h"

class Node1 {
public:
  int key;
  int data;

  Node1(){}
};

class BinaryT:public BinarySearchTree{
    public:
    BinaryT();

    void add(int data);

    int find(int data);

    bool search(int k);

    void preorderTraversal();

    bool isEmpty();

    private:
    Node1* datas[MAX_SIZE];

    void addToIndex(int index, Node1* node);

    void traverseVLR(Node1* root);

    void insert(Node1* root, Node1* node, int key);

    int  size(Node1* root);

    int getRightChildIndex(int key);

    int getLeftChildIndex(int key);

    bool findInNode(Node1* root, int data);
    int findRootInNode(Node1* root,int data);

};
