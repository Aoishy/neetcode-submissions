class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int buy=prices[0];
        for(int price:prices)
        {
                profit=max(profit,price-buy);
                if(price<buy)
                {
                    buy=price;
                }
        }
        return profit;
        
    }
};
