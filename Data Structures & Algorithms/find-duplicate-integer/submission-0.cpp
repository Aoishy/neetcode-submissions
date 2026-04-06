class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l=1;
        int n=nums.size();
        int r=n-1;
        while(l<r)
        {
          int mid=l+(r-l)/2;
          int lessequal=0;
            for(int i=0;i<n;i++)
            {
                if(nums[i]<=mid)
                {
                   lessequal++;

                }
            }

            if(lessequal<=mid)
           {l=mid+1;
           }
           else
           {
            r=mid;
           }
        }
        return l;
    }
};
