class Solution {
public:
    int jump(vector<int>& nums) {
        int reach=0;
        int res=0;
        int range=0;
        int n= nums.size();
        for(int i=0;i<n;i++)
        {
            reach=max(reach,i+nums[i]);
            if(i<n-1&&i==range)
            {
                range=reach;
                res++;
            }
        }
        return res;
        
    }
};
