#ifndef MYBINARYTREE_H_INCLUDED
#define MYBINARYTREE_H_INCLUDED





#include <stdio.h>
#include <vector>
#include <list>

namespace myBT{

class myBinaryTreeNode
{
    public:
    myBinaryTreeNode();
    myBinaryTreeNode(int v);
    ~myBinaryTreeNode();
    int Value;
    myBinaryTreeNode* lchild;
    myBinaryTreeNode* rchild;

    public:


};


myBinaryTreeNode* CreateSubRecurse(int data[], int index, int emptydata);
myBinaryTreeNode* CreateTree(int data[], int emptydata);

}
#endif // MYBINARYTREET_H_INCLUDED

