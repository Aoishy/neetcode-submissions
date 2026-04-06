class MedianFinder {
public:
    priority_queue<int> maxheap;   // max-heap (default)
    priority_queue<int, vector<int>, greater<int>> minheap; // min-heap

    MedianFinder() {
        
    }
    
    void addNum(int num) {
        maxheap.push(num);
        if(!minheap.empty()&& minheap.top()<maxheap.top())
        {
              minheap.push(maxheap.top());
              maxheap.pop();
        }
        if(maxheap.size()>minheap.size()+1)
        {
            minheap.push(maxheap.top());
            maxheap.pop();

        }
        if(minheap.size()>maxheap.size()+1)
        {
            maxheap.push(minheap.top());
            minheap.pop();
        }
    }
    
    double findMedian() {


        int n = minheap.size();
        int m=maxheap.size();
        if (n>m)
        {
            return minheap.top();


        }
        else if(m>n)
        {
            return maxheap.top();
        }
        else if(n==m)
        {
            return (double)((maxheap.top()+minheap.top())/2.0);        }
    }
};
