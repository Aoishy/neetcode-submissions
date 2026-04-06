class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {

        int row=grid.size();
        int col=grid[0].size();
        int area=0;
        for(int r=0;r<row;r++)
        {
            for(int c=0;c<col;c++)
            {
                if(grid[r][c]==1){
                    if(r-1<0||grid[r-1][c]==0)
                    {
                        area+=1;
                    }
                    if(c-1<0||grid[r][c-1]==0)
                    {
                        area+=1;
                    }
                    if(r+1>=row||grid[r+1][c]==0)
                    {
                        area+=1;
                    }
                    if(c+1>=col||grid[r][c+1]==0)
                    {
                        area+=1;
                    }
                }
            }
        }
        return area;

        
    }
};