class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buying_price=prices[0],selling_price=0,profit=0;
        for(int i=0;i<prices.size();i++)
        {
            profit=max(profit,prices[i]-buying_price);
            buying_price=min(prices[i],buying_price);

        }
        return profit;
        
    }
};
