class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>ans(n,0);
        stack<pair<int,int>>day;
        for(int i=0;i<n;i++)
        {
              int w=temperatures[i];
              while(!day.empty()&& w>day.top().first)
              {
                    auto pair=day.top();
                    day.pop();
                    ans[pair.second]=i-pair.second;
              } 
              day.push({w,i});                                   
        }
       return ans; 
    }
};
