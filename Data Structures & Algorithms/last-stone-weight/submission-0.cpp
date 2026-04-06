class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size()>1)
        {
        sort(stones.begin(),stones.end());
        int n=stones.size();
        int first=stones[n-1];
        int second=stones[n-2];
        int new1=first-second;
        stones.pop_back();
        stones.pop_back();
        if(new1>0)
        {
            stones.push_back(new1);
        }
        }  
        return stones.empty()?0:stones[0];
    }
};
