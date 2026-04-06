class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {

        int row=trust.size();
        int first=trust[0][1];
        for(int r=1;r<row;r++)
        {
            if(trust[r][1]!=first)
            {
                return -1;
            }
        }
        return first;
        
    }
};