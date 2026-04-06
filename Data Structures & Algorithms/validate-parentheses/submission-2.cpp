class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stk;
        for (char b : s)
        {
            if (b == '(' || b == '{' || b == '[')
            {
                stk.push(b);
            }
            else
            {
                if (stk.empty())
                    return false;
                char top = stk.top();
                stk.pop();
                
   
                if ((b == ')' && top != '(') || 
                    (b == '}' && top != '{') || 
                    (b == ']' && top != '['))
                {
                    return false;
                }
            }
        }
        return stk.empty();
    }
};
