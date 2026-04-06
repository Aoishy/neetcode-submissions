class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>rep(26,0);
        for(auto w:tasks)
        {
            rep[w-'A']++;
        }
        sort(rep.begin(),rep.end());
        int freq=(rep[25]-1)*n;
        for(int i=rep.size()-2;i>=0;i--)
        {
            freq-= min( rep[i],rep[25]-1);
        }
        return (freq<=0)? tasks.size() :freq+tasks.size();

        
    }
};
