class Solution {
public:

    bool dfs(int node,int parent,vector<vector<int>>& adj,vector<bool>&visited)
    {
        // if(visited[node])
        // {
        //     return true;
        // }
        visited[node]=true;
        for(int n: adj[node])
        {
            if(n==parent)
            {
                continue;
            }
           if(visited[n])
           {
            return true;
           }
            if(dfs(n,node,adj,visited))
            {
                return true;
            }
        
        }
        return false;
    }
    bool validTree(int n, vector<vector<int>>& edges) {
          if(edges.size()!=n-1)
          {
            return false;
          }
          vector<vector<int>>adj(n);
          for(auto edge:edges)
          {
            int u=edge[0];
            int v=edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
          }
            vector<bool>visited(n,false);
            if(dfs(0,-1,adj,visited))
            {
                return false;
            }
          
             for(bool v: visited)
             {
                if(!v)
                {
                    return false;
                }
             }
             return true;
         
    }
};
