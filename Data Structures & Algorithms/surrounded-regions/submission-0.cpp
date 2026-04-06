class Solution {
public:
    void unsurround(vector<vector<char>>& board,int r,int c,int rows,int cols)
    {
        if(r<0||r>=rows||c<0||c>=cols||board[r][c]!='O')
        {
            return;
        }
        board[r][c]='m';
        unsurround(board,r-1,c,rows,cols);
        unsurround(board,r+1,c,rows,cols);
        unsurround(board,r,c-1,rows,cols);
        unsurround(board,r,c+1,rows,cols);

    }
    void solve(vector<vector<char>>& board) {
        int rows=board.size();
        int cols=board[0].size();
        for(int r=0;r<rows;r++)
        {
            if(board[r][0]=='O')
            {
                unsurround(board,r,0,rows,cols);
            }
            if(board[r][cols-1]=='O')
            {
                unsurround(board,r,cols-1,rows,cols);
            }
        }
        for(int c=0;c<cols;c++)
        {
            if(board[0][c]=='O')
            {
                unsurround(board,0,c,rows,cols);
            }
            if(board[rows-1][c]=='O')
            {
                unsurround(board,rows-1,c,rows,cols);
            }
        }
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(board[i][j]=='O')
                {
                    board[i][j]='X';
                }
                else if(board[i][j]=='m')
                {
                    board[i][j]='O';
                }
            }
        }
        
    }
};
