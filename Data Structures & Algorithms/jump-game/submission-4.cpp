class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach=0;
        int n=nums.size();
        for (int i=0;i<n;i++)
        {
            reach=max(reach,i+nums[i]);
            if(i<n-1 && i==reach)
            {
                return false;
            }
        }
        return true;
    }
};
