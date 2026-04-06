class Solution {
public:

    int coinChange(vector<int>& coins, int amount) {
        long inf=10000;
        vector<int>DP(amount+1,inf);
        DP[0]=0;
        for(int i=1;i<DP.size();i++)
        {
            for(int coin:coins)
            {
                if(i-coin>=0)
                {
                    DP[i]=min(DP[i],DP[i-coin]+1);
                }
            }
        }
        if(DP[amount]!=inf)
        {
            return DP[amount];
        }
        else
        {
            return -1;
        }
        
    }
};
