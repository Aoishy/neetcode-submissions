class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
         int h=grid.size();
         int v=grid[0].size();
         int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
         int fresh=0;
         int time=0;
         for(int i=0;i<h;i++)
         {
            for(int j=0;j<v;j++)
            {
                if(grid[i][j]==1)
                {
                    fresh++;
                }
            }

         }
         while(fresh>0)
         {
           bool rotten=false;
           for(int i=0;i<h;i++)
           {
            for(int j=0;j<v;j++)
            {
                if(grid[i][j]==2)
                {
                    for(auto d:dir)
                    {
                        int row=i+d[0];
                        int col=j+d[1];
                        if(row>=0&&row<h&&col>=0&&col<v&&grid[row][col]==1)
                        {
                            grid[row][col]=3;
                            rotten=true;
                            fresh--;
                        }
                    }
                }
            }
           }
           if(!rotten) 
           {
            return -1;
           }
           for(int a=0;a<h;a++)
           {
            for(int b=0;b<v;b++)
            {
                if(grid[a][b]==3)
                {
                    grid[a][b]=2;
                }
            }
            }
            time++;
         }

      
        return time; 
        
    }
};
