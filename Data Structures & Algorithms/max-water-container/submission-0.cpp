class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int ans=0;int area=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                area=(j-i)*min(heights[i],heights[j]);
                ans=max(area,ans);
            }

        }
        return ans;
    }
};
