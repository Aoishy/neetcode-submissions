class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        long long inf=INT_MAX;
        vector<int>dis(n+1,inf);
        dis[k]=0;

        for(int i=0;i<n-1;i++)
        {
            for (auto edge:times)
            {
               int u= edge[0];
               int v= edge[1];
               int w= edge[2];
               if(dis[u]!=inf && dis[u]+w<dis[v])
               {
                dis[v]=dis[u]+w;

               }

            }
        }

        int max_dis=0;
        for(int i=1;i<=n;i++){
        if(dis[i]==inf)
        {
            return -1;
        }
       
            max_dis=max(max_dis,dis[i]);
        }
            return max_dis;
        

        
    }
};
