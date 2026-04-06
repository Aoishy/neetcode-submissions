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
    int dfs(TreeNode* node,int maxnode,int ans)
    {
        if(!node)
        {
            return 0;
        }
        ans=(node->val>=maxnode)?1:0;
        maxnode=max(node->val,maxnode);    
        ans+=dfs(node->left,maxnode,ans);
        ans+=dfs(node->right,maxnode,ans);
        return ans;

    }
    int goodNodes(TreeNode* root) {
        int ans;
      return dfs(root,root->val,ans);
        
    }
    
};
