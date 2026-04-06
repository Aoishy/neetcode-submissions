class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        int n=numCourses;

        vector<int>indegree(n,0);
        vector<vector<int>>adj(n);
        for(auto pre:prerequisites)
        {
            indegree[pre[1]]++;
            adj[pre[0]].push_back(pre[1]);
        }
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
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
            for( int pre :adj[node])
            {
                indegree[pre]--;
                if(indegree[pre]==0)
                {
                    q.push(pre);
                }
            }
        }
        return finish==n;

        
    }
};
