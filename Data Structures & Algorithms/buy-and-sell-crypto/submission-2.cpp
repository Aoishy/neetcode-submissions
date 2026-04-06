

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int buy=prices[0];
        int maxprofit=0;
        for(int i=0;i<prices.size();i++)
        {
            maxprofit=max(maxprofit,prices[i]-buy);
            buy=min(buy,prices[i]);
        }
        return maxprofit;
    }
};
