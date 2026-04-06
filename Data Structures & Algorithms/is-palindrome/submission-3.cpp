class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.length()-1;
        while(right>left)
        {
            while(left<right&&nonletter(s[left]))
            {
                left++;
            }
            while(right>left&&nonletter(s[right]))
            {
                right--;
            }
            if(tolower(s[left])!=tolower(s[right]))
            {
                return false;
            }
            left++;
            right--;
            
        }
        return true;

        
    }
    bool nonletter(char c)
    {
        if((c>='a'&&c<='z')|(c>='A'&&c<='Z')|(c>='0'&&c<='9'))
        {
            return false;
        }
        return true;
    }
};
