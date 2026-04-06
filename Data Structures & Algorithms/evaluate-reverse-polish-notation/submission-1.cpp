class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>number;
        for(auto s:tokens)
        {
            if(s=="+")
            {
                int a=number.top();
                number.pop();
                int b=number.top();
                number.pop();
                number.push(a+b);
            }
            else if(s=="-")
            {
                int a=number.top();
                number.pop();
                int b=number.top();
                number.pop();
                number.push(b-a);
            }
            else if(s=="*")
            {
                int a=number.top();
                number.pop();
                int b=number.top();
                number.pop();
                number.push(a*b);
            }
           else if(s=="/")
            {
                int a=number.top();
                number.pop();
                int b=number.top();
                number.pop();
                number.push(b/a);
            }
            else
            {
                number.push(stoi(s));
            }
        }
        return number.top();
        
    }
};
