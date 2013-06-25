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
    //stack<int> tmpstack;
    myBinaryTreeNode* p = node;
    //int cnt = 0;
	while(p!=NULL || !bstack.empty())
	{
		if(p!= NULL)
		{
			bstack.push(p);
			p=p->lchild;
		}
		else
		{
			p = bstack.top();
			visitNode(p);
			bstack.pop();
			p = p->rchild;
		}



	}


	
   
            

        

		

        


    return 0;



}