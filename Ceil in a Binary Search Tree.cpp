#include <bits/stdc++.h>
int findCeil(BinaryTreeNode<int> *root, int x)
{
    int ceil = -1;
    while(root)
    {
        if(x==root->data) return root->data;
        if(x>root->data)
        {
            root = root->right;
        }
        else
        {
            ceil = root->data;
            root = root->left;
        }
    }
    return ceil;
}
