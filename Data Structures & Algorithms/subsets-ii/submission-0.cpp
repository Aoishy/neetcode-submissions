class Solution {
public:
    vector<vector<int>>ans;
    vector<int>subset;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        dfs(0,nums);
        return ans;

        
    }
    void dfs(int i,vector<int>&nums)
    {
         if(i>=nums.size())
         {
            ans.push_back(subset);
            return;
         }
         subset.push_back(nums[i]);
         dfs(i+1,nums);
         subset.pop_back();
         while(i+1<nums.size()&&nums[i]==nums[i+1])
         {
            i++;
         }
         dfs(i+1,nums);
    }
};
