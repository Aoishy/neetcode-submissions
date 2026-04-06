class Solution {
public:

    vector<int>subset;
    vector<vector<int>>ans;
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        dfs(nums,0);
        return ans;
    }
    void dfs(vector<int>&nums,int level)
    {
        if(level>=nums.size())
        {
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[level]);
        dfs(nums,level+1);
        subset.pop_back();
        dfs(nums,level+1);
    }
};
