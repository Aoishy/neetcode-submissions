class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>res;
        vector<int>ans;
        int n=nums.size();
        int check=n/3;
        for(int i=0;i<n;i++)
        {
            res[nums[i]]++;
        }
        for(auto n:res)
        {
            if(n.second>check)
            {
                ans.push_back(n.first);
            }
        }
        return ans;
  
    }
    
};

