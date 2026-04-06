class Solution {
public:
    int calPoints(vector<string>& operations) {

        vector<int>res;
        
        for(string op:operations)
        {
            
            if(op=="+")
            {    int n=res.size();
                 int num1=(res[n-1]);
                 int num2=(res[n-2]);
                 res.push_back(num1+num2);

            }
           else if(op=="D")
            {
                int num=2*res.back();
                res.push_back(num);

            }
           else if(op=="C")
            {
                res.pop_back();
            }
            else
            {
                res.push_back(stoi(op));
            }

        }
     int ans=0;
     for(int num:res)
     {
        ans+=num;
     }
     return ans;
    }
};