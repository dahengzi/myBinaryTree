#include <iostream>
#include "../myBinaryTreeTraverse.h"
#include "../myBinaryTree.h"
using namespace std;
using namespace myBT;

int main()
{
    cout << "Hello world!" << endl;
    int testdata[8] = {7, 1, 5, 4, 6, 8, -1, 2};
    //0. Create a binaryTree from an interger array
    myBinaryTreeNode* root = CreateTree(testdata, -1);

    //1. test the left first traverse of
    LeftChildTraverse(root);

    return 0;
}
