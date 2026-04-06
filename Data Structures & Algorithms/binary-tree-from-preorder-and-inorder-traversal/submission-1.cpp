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
    int pre_idx=0;
    TreeNode* dfs(vector<int>&preorder,vector<int>&inorder,unordered_map<int,int>&mp,int left,int right)
    {
        if(left>right)
        {
            return nullptr;
        }
     int root=preorder[pre_idx];
     pre_idx++;
      TreeNode* node=new TreeNode(root);

      node->left=dfs(preorder,inorder,mp,left,mp[root]-1);
      node->right=dfs(preorder,inorder,mp,mp[root]+1,right);
      return node;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
           unordered_map<int,int>mp;
           int i=0;
           for(int num:inorder)
           {
            mp[num]=i;
            i++;
           }

           return dfs(preorder,inorder,mp,0,inorder.size()-1);
        
    }
};
