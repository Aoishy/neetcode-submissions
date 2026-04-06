class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int>res(n,0);
        for(int i=0;i<n;i++)
        {
            if(i+k>=n)
            {
                res[i+k-n]=nums[i];
            }
            else
            {
                res[i+k]=nums[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=res[i];
        }

    }
};