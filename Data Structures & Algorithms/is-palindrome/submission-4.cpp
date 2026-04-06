class Solution {
public:
    bool isPalindrome(string s) {
     
        int l=0;
        int r=s.size()-1;
        while(r>l)
        {
            while(l<r&&nonletter(s[l]))
                l++;
            while(r>l&&nonletter(s[r]))
                r--;
            if(tolower(s[l])!=tolower(s[r]))
                return false;
            l++;
            r--;
        }
        return true;
    }
    bool nonletter(char c)
    {
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9'))
        {
            return false;
        }
        return true;
    }
};
