class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int idx=0;
        int len=0;
        for(int i=0;i<n;i++)
        {
            int l=i;
            int r=i;
            while(l>=0&& r<n&&s[l]==s[r])
            {
               if(r-l+1>len)
               {
                len=r-l+1;
                idx=l;
               }
               l--;
               r++;
            }
            l=i;
            r=i+1;
             while(l>=0&& r<n&&s[l]==s[r])
            {
               if(r-l+1>len)
               {
                len=r-l+1;
                idx=l;
               }
               l--;
               r++;
            }

        }
      return s.substr(idx,len);

        
    }
};
