class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {


        unordered_map<string,vector<string>>match;
          for(string s:strs)
            {
                string anagram=s;
                sort(anagram.begin(),anagram.end());
                match[anagram].push_back(s);
            }
        
        vector<vector<string>>ans;
        for(auto s:match)
        {
            ans.push_back(s.second);
        }

      return ans;
        
    }
};
