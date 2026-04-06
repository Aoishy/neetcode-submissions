class Solution {
public:
    int dir[4][2]={{1,0},
                   {0,1},
                   {-1,0},
                   {0,-1}};

    void dfs(vector<vector<char>>& grid,int h,int v)  
    {
         if(h<0||h>=grid.size()||v<0||v>=grid[0].size()||grid[h][v]=='0')
         {
            return;
         }
         grid[h][v]='0';
         for(int i=0;i<4;i++)
         {

            dfs(grid,h+dir[i][0],v+dir[i][1]);
         }
    }             

    int numIslands(vector<vector<char>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        int islands=0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(grid[i][j]=='1')
                {
                    dfs(grid,i,j);
                    islands++;
                }
            }
        }
        return islands;
        
    }
};
