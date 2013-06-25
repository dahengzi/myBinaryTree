#include "myBinaryTree.h"
#include <vector>
#include <list>
#include <stack>
#include <iostream>
#include <stdio.h>

using namespace std;
using namespace myBT;

int visitNode(myBinaryTreeNode* node)
{
    if (NULL == node)
        cout<<-1<<"\t";
    else
        cout<<node->Value<<"\t";
    return 0;
}

int LeftChildTraverse(myBinaryTreeNode* node)
{
    stack<myBinaryTreeNode*> bstack;
    stack<int> tmpstack;
    myBinaryTreeNode* p = node;
    int cnt = 0;
    while (p!=NULL || !bstack.empty())
    {
         while(p!=NULL)
        {
            //first traverse the

            bstack.push(p->lchild);
            tmpstack.push(cnt++);
            p = p->lchild;

        }

        if(!bstack.empty())
        {
            p = bstack.top();
            int tmp = tmpstack.top();
            visitNode(p);
            p = p->rchild;
            tmpstack.pop();
            bstack.pop();

        }
    }


    return 0;
}


