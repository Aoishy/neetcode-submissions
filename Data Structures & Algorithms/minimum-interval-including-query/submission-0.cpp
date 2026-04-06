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
                    if(res==-1||(end-start+1)<res)
                    {
                        res=end-start+1;
                    }
                  }

            }
            ans.push_back(res);

        }
        return ans;
        
    }
};
