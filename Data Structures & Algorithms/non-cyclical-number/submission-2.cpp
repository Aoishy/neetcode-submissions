class Solution {
public:

    int square(int n)
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
        int slow =n;
        int fast =square(n);
        while(fast!=1 && slow!=fast)
        {   
            slow=square(slow);
            fast=square(square(fast));
        }
        return fast==1;

        
    }
};
