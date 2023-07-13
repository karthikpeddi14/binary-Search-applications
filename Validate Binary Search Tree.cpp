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
    bool isValidBST(TreeNode* root) 
    {
        if(root==NULL) return true;
        long prev_num = LONG_MIN;
        stack<TreeNode*> st;
        TreeNode* node = root;
        while(true)
        {
            if(node)
            {
                st.push(node);
                node = node->left;
            }
            else
            {
                if(st.empty()) break;
                node = st.top();
                st.pop();
                if(node->val <= prev_num) return false;
                prev_num = node->val;
                node = node->right;
            }
        }
        return true;
    }
};
