class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int>count;
        for(int num:nums)
        {
            count[num]++;
        }
       vector<pair<int,int>>res;
       for(auto num:count)
       {
        res.push_back({num.second,num.first});
       }
        sort(res.rbegin(),res.rend());
        vector<int>ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(res[i].second);
        }
        return ans;
    }
};
