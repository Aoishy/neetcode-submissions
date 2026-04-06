class MinStack {
public:
stack<long>sk;
long min;
    MinStack() {
        
    }
    
    void push(int val) {

if(sk.empty())
{
    sk.push(0);
    min=val;
}
else
{
    sk.push(val-min);
    if(val<min)
    {
        min=val;
    }
}
     
        
    }
    
    void pop() {

        if(sk.empty())
        {
            return;
        }
        long value=sk.top();
        sk.pop();
        if(value<0)
        {
            min=min-value;
        }
    }
    
    int top() {
        long ans=sk.top();
        if(ans>0)
        {
           return ans+min;
        }
        else {
            return min;
        }
        
    }
    
    int getMin() {
        return (int)min;
    }
};
