class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>temp=matrix;
        int row=matrix.size();
        int col=matrix[0].size();
        for(int r=0;r<row;r++)
        {
            for(int c=0;c<col;c++)
            {
                if(matrix[r][c]==0)
                {
                    for(int c2=0;c2<col;c2++)
                    {
                        temp[r][c2]=0;
                    }
                    for(int r2=0;r2<row;r2++)
                    {
                        temp[r2][c]=0;
                    }
                }
            }
        }
        for(int r=0;r<row;r++)
        {
            for(int c=0;c<col;c++)
            {
                matrix[r][c]=temp[r][c];
            }
        }
    }
};
