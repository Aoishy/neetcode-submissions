class Solution {
public:

    bool dfs(int node ,int p,vector<vector<int>>&adj,vector<bool>&visited)
    {
        if(visited[node])
        {
            return true;
        }
        visited[node]=true;
        for( int a: adj[node])
        {
            if(a==p)
            {
                continue;
            }
            if(dfs(a,node,adj,visited))
            {
                return true;
            }
        }
        return false;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        
        int n=edges.size();
        vector<vector<int>>adj(n+1);
        for(auto edge:edges)
        {
            int u=edge[0];
            int v=edge[1];
            int parent=-1;
            adj[u].push_back(v);
            adj[v].push_back(u);
            vector<bool>visited(n+1,false);
            if(dfs(u,parent,adj,visited))
            {
                return {u,v};
            }

        }
        return {};
    }
};
