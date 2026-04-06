class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        for(int i=0;i<s2.length();i++)
        {
            for(int j=0;j<s2.length();j++)
            {
                string s=s2.substr(i,j-i+1);
                sort(s.begin(),s.end());
                if(s==s1)
                {
                    return true;
                }
            }
        }
        return false;
    }
};
