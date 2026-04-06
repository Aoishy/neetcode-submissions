class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_number=matrix.size();
        int col_number=matrix[0].size();
        int left=0;
        int right=row_number*col_number-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            int row=mid/col_number;
            int col=mid%col_number;
            if(target>matrix[row][col])
            {
                left=mid+1;
            }
            if(target<matrix[row][col])
            {
                right=mid-1;
            }
            if(target==matrix[row][col])
            {
                return true;
            }
        }
        return false;
    }
};
