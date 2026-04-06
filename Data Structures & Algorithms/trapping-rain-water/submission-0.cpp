class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty())
        {
            return 0;
        }        
        int n=height.size();
        int water=0;
        for(int i=0;i<n;i++)
        {
            int maxleft=height[i];
            int maxright=height[i];
            for(int j=0;j<i;j++)
            {
                maxleft=max(maxleft,height[j]);
            }
            for(int k=i+1;k<n;k++)
            {
                maxright=max(maxright,height[k]);
            }
            water+=max(0,min(maxleft,maxright)-height[i]);
        }
        return water;
    }
};
