class Solution {
public:
    int findMin(vector<int> &nums) {
        int m=10000;
        for(int i=0;i<nums.size();i++)
        {
            m=min(m,nums[i]);
        }
        return m;
        
    }
};
