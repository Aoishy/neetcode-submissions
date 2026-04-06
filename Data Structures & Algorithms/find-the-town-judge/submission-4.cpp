class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        vector<int>in(n+1,0);
        vector<int>out(n+1,0);
        for(auto d: trust)
        {
            in[d[1]]++;
            out[d[0]]++;
        }
        for(int node=1;node<=n;node++)
        {
            if(in[node]==n-1&&out[node]==0)
            {
                return node;
            }

        }
        return -1;
    }
};