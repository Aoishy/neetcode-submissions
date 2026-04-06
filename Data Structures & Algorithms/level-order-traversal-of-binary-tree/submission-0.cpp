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
vector<vector<int>>ans;
 void dfs(TreeNode* r,int level)
        {
            if(!r)
            {
                return ;
            }
            if(level==ans.size())
            {
                ans.push_back({});
            }
            ans[level].push_back(r->val);
            dfs(r->left,level+1);
            dfs(r->right,level+1);
        }
    vector<vector<int>> levelOrder(TreeNode* root) {
       dfs(root,0);
       return ans;
        
    }
};
