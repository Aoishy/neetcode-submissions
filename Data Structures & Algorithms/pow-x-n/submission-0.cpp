class Solution {
public:
    double myPow(double x, int n) {

        if(x==1)
        {
            return 1;
        }
        double res=1;
        for(int i=0;i<abs(n);i++)
        {
            if(n<0)
            {
                res*=(1/x);
            }
            else
            
            res*=x;
        }
        return res;
    }
};
