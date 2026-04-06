class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {


        sort(intervals.begin(),intervals.end());
        int end_time=intervals[0][1];
        int ans=0;
        for(int i=1;i<intervals.size();i++)
        {
            int start=intervals[i][0];
            int end=intervals[i][1];
            if(start>=end_time)
            {
                end_time=end;
            }
            else
            {
                ans++;
                end_time=min(end_time,end);
            }
        }

      return  ans;

        
    }
};
