class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;
        sort(piles.begin(),piles.end());
        int right=piles[piles.size()-1];
        int ans=right;
        while(left<=right)
        {
            long  long time=0;
            int mid=left+(right-left)/2;
            for(auto pile:piles)
            {
                time+=(pile/mid);
                if(pile%mid!=0)
                {
                    time++;
                }
            }
            if(time<=h)
            {
               ans=mid;
               right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
      return ans;  
    }
};
