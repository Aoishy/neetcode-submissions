class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

      stack<pair<int,int>>stk;
      int n=temperatures.size();
      vector<int>ans(n,0);
      for(int i =0;i<n;i++)
      {
            int t=temperatures[i];
            while(!stk.empty()&& t>stk.top().first)
            {
                  auto pair=stk.top();
                  stk.pop();
                  ans[pair.second]=i-pair.second;

            }
            stk.push({t,i});
      }
      return ans;
        
    }
};
