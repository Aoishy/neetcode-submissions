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

int dfs(TreeNode* node,int & maxsum)
{
    if(!node)
    {
        return 0;
    }
    int leftmax=max(dfs(node->left,maxsum),0);
    int rightmax=max(dfs(node->right,maxsum),0);
    maxsum=max(maxsum,node->val+leftmax+rightmax);

    return node->val+max(leftmax,rightmax);
}
    int maxPathSum(TreeNode* root) {
        int ans=root->val;
        dfs(root,ans);
        return ans;

    }
};
