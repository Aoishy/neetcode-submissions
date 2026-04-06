class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> map;
        int l=0;
        int max_len=0;
        for(int i=0;i<s.size();i++)
        {
            if(map.find(s[i])!=map.end())
            {
                l=max(l,1+map[s[i]]);
            }
            map[s[i]]=i;
            max_len=max(max_len,i-l+1);
        }
        return max_len;
    }
};
;
