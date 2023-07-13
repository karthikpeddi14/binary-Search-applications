class Solution {
public:
    int kthSmallest(TreeNode* root, int k) 
    {
        if(root==NULL) return -1;
        stack<TreeNode*> st;
        st.push(root);
        TreeNode* node = root->left;
        int count =0;
        while(true)
        {
            if(node!=NULL)
            {
                st.push(node);
                node = node->left;
            }
            else
            {
                if(st.empty()) break;
                node = st.top();
                st.pop();
                count++;
                if(count == k) return node->val;
                node = node->right;
            }
        }
        return -1;
    }
};
