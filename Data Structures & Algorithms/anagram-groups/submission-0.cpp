class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>matched;
        for(auto &s:strs)
        {
            string anagram=s;
            sort(anagram.begin(),anagram.end());
            matched[anagram].push_back(s);
        }
        vector<vector<string>>res;
        for(auto &match:matched)
        {
            res.push_back(match.second);
        }
        return res;

        
    }
};
