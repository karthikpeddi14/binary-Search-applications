#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/

pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    if(root == NULL) return {-1,-1};
    int successor = INT_MIN;
    int predecessor = INT_MAX;
    BinaryTreeNode<int>* a=root;
    pair<int,int> ans = {-1,-1};
    while(a)
    {
        if(a->data <= key)
        {
            a = a->right;
        }
        else
        {
            ans.second = a->data;
            a = a->left;
        }
    }

    a = root;
    while(a)
    {
        if(a->data >= key)
        {
            a = a->left;
        }
        else
        {
            ans.first = a->data;
            a = a->right;
        }
    }
    return ans;

}
