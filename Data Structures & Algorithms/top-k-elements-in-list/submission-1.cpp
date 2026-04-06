class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>num_count;
        for(int num:nums)
        {
            num_count[num]=1+num_count[num];
        }
        vector<vector<int>>frequency(nums.size()+1);
        for(auto n:num_count)
        {
            frequency[n.second].push_back(n.first);
        }

    
    vector<int>result;
    for(int i=frequency.size()-1;i>0;i--)
    {
        for(int n:frequency[i])
        {
            result.push_back(n);
            if(result.size()==k)
            {
                return result;
            }
        }
    }
    return result;

    }    
};
