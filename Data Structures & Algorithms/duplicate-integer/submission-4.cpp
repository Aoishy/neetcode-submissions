class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int>ans;
        for(int num:nums)
        {
            if(ans.find(num)!=ans.end())
            {
                return true;
            }
           
                ans.insert(num);
            
        }
        return false;
        
    }
};