class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        long long inf=1000;
        vector<int>prices(n,inf);
        prices[src]=0;
        for(int i=0;i<=k;i++)
        {
            vector<int>temp=prices;
            for(auto flight:flights)
            {
                int s=flight[0];
                int d=flight[1];
                int p=flight[2];
                if(prices[s]==inf)
                {
                    continue;
                }
                if(prices[s]+p<temp[d])
                {
                    temp[d]=prices[s]+p;
                }
            }
            prices=temp;
        }
        
        if(prices[dst]==inf)
        {
            return -1;
        }
        else
        {
            return prices[dst];
        }
    }
};
