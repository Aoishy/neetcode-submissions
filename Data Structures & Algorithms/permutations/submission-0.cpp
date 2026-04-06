class Solution {
public:
    vector<vector<int>>ans;
    vector<int>subset;
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<bool>visited(n,false);
        dfs(nums,visited);
        return ans;
    }

    void dfs(vector<int>&nums,vector<bool>&visited)
    {
        if(subset.size()==nums.size())
        {
            ans.push_back(subset);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!visited[i])
            {
                subset.push_back(nums[i]);
                visited[i]=true;
                dfs(nums,visited);
                subset.pop_back();
                visited[i]=false;
            }
        }
    }


};
