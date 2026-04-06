class Solution {
public:
    int dir[4][2]={{-1,0},
                   {1,0},
                   {0,-1},
                   {0,1}};
    int dfs(vector<vector<int>>& grid,int h,int v)
    {
        if(h<0||h>=grid.size()||v<0||v>=grid[0].size()||grid[h][v]==0)
        {
            return 0;
        }
        grid[h][v]=0;
        int ans=1;
        for(int i=0;i<4;i++)
        {
            ans+=dfs(grid,h+dir[i][0],v+dir[i][1]);
        }
        return ans;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int h=grid.size();
        int v=grid[0].size(); 
        int maxarea=0;
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<v;j++)
            {
                if(grid[i][j]==1)
                {
                   maxarea=max(maxarea,dfs(grid,i,j));
                }
            }
        }
        return maxarea;
        
    }
};
