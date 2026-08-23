class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int left=0;
        int res=INT_MAX;
        int total=0;
        for(int r=0;r<nums.size();r++)
        {
                 total+=nums[r];
                 while(total>=target)
                 {
                    res=min(res,r-left+1);
                    total-=nums[left];
                    left++;

                 }


        }
        return res==INT_MAX?0:res;
    }
};