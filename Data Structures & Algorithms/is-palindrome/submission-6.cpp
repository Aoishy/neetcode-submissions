class Solution {
public:

    bool check(char s)
    {
        return (s>='a'&&s<='z'||s>='A'&&s<='Z'||s>='0'&&s<='9');
    }
    bool isPalindrome(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<=right)
        { while(left<right && !check(s[left]))
        {
           left++;
        }
        while(left<right&&!check(s[right]))
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
};
