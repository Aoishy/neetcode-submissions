class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>num_count;
        for(int n:nums)
        {
            num_count[n]++;
        }
        vector<pair<int,int>>count;
        for(auto c:num_count)
        {
            count.push_back({c.second,c.first});
        }
    sort(count.rbegin(),count.rend());
    
        vector<int>result;
        for(int i=0;i<k;i++)
        {
           result.push_back(count[i].second);
        }
        return result;
    }
};
