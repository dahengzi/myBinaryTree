#include "myBinaryTree.h"
namespace myBT{

myBinaryTreeNode::myBinaryTreeNode()
{

};

myBinaryTreeNode::~myBinaryTreeNode()
{

};

myBinaryTreeNode::myBinaryTreeNode(int v)
{
    Value = v;
}

 myBinaryTreeNode* CreateTree(int data[], int emptydata)
 {
    // the tree is stored in a array data, with data[0] = length, root = data[1];
    // for each data[i], its left child is data[2*i], right child is data[2*i+1];
    // emptydata means: if data[j] == emptydata, then this node is empty

    if(NULL == data)
        return NULL;

    if(data[0] <= 0)
        return NULL;

    //int data_length = data[0];
    // Create the root node
    int index = 1;
    myBinaryTreeNode* root = new myBinaryTreeNode(data[index]);

    // recursively create left and right child tree
    root->lchild = CreateSubRecurse(data, index*2, emptydata);
    root->rchild = CreateSubRecurse(data, index*2 + 1, emptydata);
    return root;

 }

myBinaryTreeNode* CreateSubRecurse(int data[], int index, int emptydata)
 {
     if(NULL == data)
        return NULL;

    if(data[0] <= index)
        return NULL;

    if(emptydata == data[index])
        return NULL;

    myBinaryTreeNode* middle = new myBinaryTreeNode(data[index]);

    //// recursively create left and right child tree
    middle->lchild = CreateSubRecurse(data, index*2, emptydata);
    middle->rchild = CreateSubRecurse(data, index*2 + 1, emptydata);

    return middle;


 }

 }


