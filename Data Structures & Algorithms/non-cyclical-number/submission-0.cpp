class Solution {
public:

    int check(int n)
    {
        int res=0;
        while(n>0)
        {
            int digit=n%10;
            digit*=digit;
            res+=digit;
            n/=10;
        }
        return res;
    }
    bool isHappy(int n) {
        unordered_set<int>visited;
        while(visited.find(n)==visited.end())
        {   
            visited.insert(n);
            n=check(n);
            if(n==1)
            {
                return true;
            }
        }
        return false;

        
    }
};
