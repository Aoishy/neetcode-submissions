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
pair<bool,pair<int,int>>subtree(TreeNode* root)
{
        if(!root)
        {
            return {true,{INT_MAX,INT_MIN}};
        }
        pair<bool,pair<int,int>>leftsub=subtree(root->left);
        pair<bool,pair<int,int>>rightsub=subtree(root->right);
        bool check=true;
        if((!leftsub.first)||(!rightsub.first))
        {
                 check= false;
        }
        if(leftsub.second.second>=root->val||rightsub.second.first<=root->val)
        {
            check= false;
        }

        int minimum=min(leftsub.second.first,min(rightsub.second.first,root->val));
        int maximum=max(leftsub.second.second,max(rightsub.second.second,root->val));
        return {check,{minimum,maximum}};
       
}
    bool isValidBST(TreeNode* root) {    
        
        return subtree(root).first;
        
    }
};
