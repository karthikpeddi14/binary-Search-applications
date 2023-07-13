/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* pre_order(vector<int>& preorder, int start, int end)
    {
        if(start>end) return NULL;
        TreeNode* root = new TreeNode(preorder[start]);
        int left=0;
        for(int i=start+1 ; i<=end ; i++)
        {
            if(preorder[i]<preorder[start]) left++;
        }
        root->left = pre_order(preorder,start+1,start+left);
        root->right = pre_order(preorder,start+left+1,end);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) 
    {
        if(preorder.size()==0) return NULL;
        return pre_order(preorder,0,preorder.size()-1);
    }
};
