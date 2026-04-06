/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
static bool compare(const Interval &x,const Interval &y)
{
    return x.start<y.start;
}
    bool canAttendMeetings(vector<Interval>& intervals) {
        
        sort(intervals.begin(),intervals.end(),compare);
        int temp=intervals[0].end;
        for(int i=1;i<intervals.size();i++)
        {
            int start=intervals[i].start;
            int end=intervals[i].end;
            if(start<temp)
            {
                return false;
            }
            else
            {
                temp=end;
            }
        }
        return true;
    }
};
