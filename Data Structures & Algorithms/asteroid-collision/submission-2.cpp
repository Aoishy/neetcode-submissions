class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        vector<int>res;
        for(int ast:asteroids)
        {
            if(ast>0)
            {
                res.push_back(ast);
            }
            else
            {
                
                while(!res.empty()&&ast<0&&res.back()>0)
                {
                    int diff=ast+res.back();
                    if(diff<0)
                    {
                        res.pop_back();
                    }
                    else if(diff==0)
                    {
                        ast=0;
                        res.pop_back();
                    }
                    else
                    {
                        ast=0;
                    }
                }
                if(ast!=0)
                {
                    res.push_back(ast);
                }
            }
        }
        return res;
        
    }
};