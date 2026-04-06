class Solution {
public:
    int mySqrt(int x) {

        int left=0;
        int right=x;
        int ans=0;
        while(left<=right)
        {
            long long mid=left+(right-left)/2;
            long long temp=mid*mid;
            if(temp<=x)
            {
                ans=mid;
            left=mid+1;
            }
            else if(temp>x)
            {
                right=mid-1;
            }
          

        }
        return ans;
        
    }
};