class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int>map;
        int left=0,ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(map.find(s[i])!=map.end())
            {
                left=max(left,1+map[s[i]]);
            }
            map[s[i]]=i;
            ans=max(ans,i-left+1);

        }
        return ans;
        
    }
};
