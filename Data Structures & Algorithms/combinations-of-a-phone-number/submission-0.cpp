class Solution {
public:
    vector<string>ans;
    string word="";
    vector<string>digitTochar={"","", "abc", "def", "ghi", "jkl",
                                  "mno", "qprs", "tuv", "wxyz"};
    vector<string> letterCombinations(string digits) {
        if(digits.empty())
        {
            return ans;
        }
        backtrack(digits,0,word);
        return ans;
        
    }
    void backtrack(string digits,int i,string word)
    {
        if(word.size()==digits.size())
        {
            ans.push_back(word);
            return;
        }
        string chars=digitTochar[digits[i]-'0'];
        for(char c: chars)
        {
            backtrack(digits,i+1,word+c);
        }
    }

};
