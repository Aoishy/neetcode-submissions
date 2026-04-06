class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>maxheap;
        for(auto num:stones)
        {
            maxheap.push(num);
        }
        while(maxheap.size()>1)
        {
            int a=maxheap.top();
            maxheap.pop();
            int b=maxheap.top();
            maxheap.pop();
            if(a-b>0)
            {
                maxheap.push(a-b);
            }
            else{
                maxheap.push(0);
            }
         
        }
        return maxheap.top();
    }
};
