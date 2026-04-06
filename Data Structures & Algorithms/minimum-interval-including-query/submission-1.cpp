class Solution {
public:
    vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
        vector<int>ans;
        for(auto query:queries)
        {
            int res=-1;
            for(auto interval:intervals)
            {
                  int start=interval[0];
                  int end=interval[1];
                  if(start<=query&&query<=end)
                  { 
                    int temp= end-start+1;
                    if(res==-1||temp<res)
                    {
                        res=temp;
                    }
                  }

            }
            ans.push_back(res);

        }
        return ans;
        
    }
};
