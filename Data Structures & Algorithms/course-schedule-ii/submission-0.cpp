class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {

        int n=numCourses;
        vector<int>in(n,0);
        vector<vector<int>>adj(n);
        for(auto pre:prerequisites)
        {
            in[pre[0]]++;
            adj[pre[1]].push_back(pre[0]);
        }
        queue<int>q;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(in[i]==0)
            {
                q.push(i);
            }
        }
        int finish=0;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            finish++;
            ans.push_back(node);
            for(int n:adj[node])
            {
                in[n]--;
                if(in[n]==0)
                {
                    q.push(n);
                }
            }
        }
        if(finish==n)
        {
            return ans;
        }
        return {};

        }
    
};
