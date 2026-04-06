class KthLargest {
public:
     vector<int>values;
     int k;
    KthLargest(int k, vector<int>& nums) {

      this->values=nums;
      this->k=k; 

        
    }
    
    int add(int val) {
        values.push_back(val);
        sort(values.begin(),values.end());
        int ans=values.size()-k;
        return values[ans];
        
    }
};
