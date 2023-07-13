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
    bool isvalid(TreeNode* root, long left_boundary , long right_boundary)
    {
        if(root==NULL) return true;
        if(left_boundary>= root->val || root->val >= right_boundary) return false;
        return isvalid(root->left, left_boundary , root->val) &&
                isvalid(root->right, root->val , right_boundary);
    }
    bool isValidBST(TreeNode* root) 
    {
        return isvalid(root,LONG_MIN, LONG_MAX);
    }
};
