class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int,int>res;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            res[nums[i]]++;
        }
        int mx=0;
        int key=0;
        for(auto num:res)
        {
             if (num.second>mx)
             {
                mx=num.second;
                key=num.first;
             }
        }
        return key;
        
        
    }
};