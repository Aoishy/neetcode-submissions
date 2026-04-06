class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for(int r=0;r<9;r++)
        {
            unordered_set<char>s;
            for(int c=0;c<9;c++)
            {
                if(board[r][c]=='.')
                {
                    continue;
                }
                if(s.count(board[r][c]))
                {
                    return false;
                }
                s.insert(board[r][c]);
            }
        }

        for(int c=0;c<9;c++)
        {
            unordered_set<char>s;
            for(int r=0;r<9;r++)
            {
                if(board[r][c]=='.')
                {
                    continue;
                }
                if(s.count(board[r][c]))
                {
                    return false;
                }
                s.insert(board[r][c]);
            }
        }

        for( int boxrow=0;boxrow<3;boxrow++)
        {
            for(int boxcol=0;boxcol<3;boxcol++)
            {
                unordered_set<char>s;
                for(int r=boxrow*3;r<boxrow*3+3;r++)
                {
                    for(int c=boxcol*3;c<boxcol*3+3;c++)
                    {
                       if(board[r][c]=='.')
                      {
                          continue;
                      }
                       if(s.count(board[r][c]))
                      {
                           return false;
                      }
                         s.insert(board[r][c]);
                    }
                }
            }
        }

        return true;
        
    }
};
