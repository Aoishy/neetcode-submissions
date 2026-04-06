class Solution {
public:

    string encode(vector<string>& strs) {

        string ans;
        for (string s:strs)
        {
            ans+=to_string(s.size())+"#"+s;
        }
        return ans;

    }

    vector<string> decode(string s) {
        int i=0;
        vector<string>ans;
        while(i<s.size())
        {
            int j=i;
            while(s[j]!='#')
            {
                j++;
            }
            int length=stoi(s.substr(i,j-i));
             i=1+j;
            j=i+length;
            ans.push_back(s.substr(i,length));
            i=j;
        }
        return ans;
    }
};
