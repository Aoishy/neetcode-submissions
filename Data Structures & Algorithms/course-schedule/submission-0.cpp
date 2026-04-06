class Solution {
public:
  unordered_map<int,vector<int>>pre;
  unordered_set<int>visited;

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        for(int i=0;i<numCourses;i++)
        {
            pre[i]={};
        }
        for(auto &prereq:prerequisites)
        {
            pre[prereq[0]].push_back(prereq[1]);
        }
        for(int i=0;i<numCourses;i++)
        {
            if(!dfs(i))
            {
                return false;
            }
        }
        return true;
    }


    bool dfs(int node)
    {
        if(visited.count(node))
        {
            return false;
        }
        if(pre[node].empty())
        {
            return true;
        }
        visited.insert(node);
        for(int p:pre[node])
        {
            if(!dfs(p))
            {
                return false;
            }
        }
        visited.erase(node);
        pre[node].clear();
        return true;
    }
};
