class Solution {
public:

    void dfs(int node,vector<vector<int>>& adj,vector<bool>&visited)
    {
        visited[node]=true;
        for(auto n: adj[node])
        {
            if(!visited[n])
            {
                dfs(n,adj,visited);
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        vector<bool>visited(n,false);
        for(auto edge:edges)
        {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        int ans=0;
        for(int node=0;node<n;node++)
        {
            if(!visited[node])
            {
                dfs(node,adj,visited);
                ans++;
            }
        }
        return ans;
    }
};
