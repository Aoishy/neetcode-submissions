class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {

        unordered_map<int,int>dp;
        dp[0]=1;
        for(auto num:nums)
        {
            unordered_map<int,int>newdp;
            for(auto i:dp)
            {
                int sum=i.first;
                int count=i.second;
                newdp[sum+num]+=count;
                newdp[sum-num]+=count;
            }

            dp=newdp;
        }
        return dp[target];
        
    }
};
