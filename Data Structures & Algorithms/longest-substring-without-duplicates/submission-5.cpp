class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int res=0;
        int left=0;
        if (s.empty())
        {
            return 0;
        }
        unordered_map<char,int>ans;
        for(int i=0;i<s.length();i++)
        {
            if(ans.find(s[i])!=ans.end())
            {
               left=max(left,ans[s[i]]+1);
            }
            ans[s[i]]=i;
            res=max(res,i-left+1);
        }
        return res;
    }
};
