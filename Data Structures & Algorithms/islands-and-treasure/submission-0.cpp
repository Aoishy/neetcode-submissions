class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int h=grid.size();
        int v=grid[0].size();
        int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
        queue<pair<int,int>>q;
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<v;j++)
            {
                if(grid[i][j]==0)
                {
                    q.push({i,j});
                }
            }
        }
        while(!q.empty())
        {
            int m=q.front().first;
            int n=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int a=m+dir[i][0];
                int b=n+dir[i][1];
            
            if(a<0||b<0||a>=h||b>=v||grid[a][b]!=INT_MAX)
            {
                continue;
            }
            grid[a][b]=grid[m][n]+1;
            q.push({a,b});
        }

        }
        
    }
};
