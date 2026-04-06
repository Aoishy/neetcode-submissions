class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>number;
        for(int num:nums1)
        {
            number.push_back(num);
        }
        for(int num:nums2)
        {
            number.push_back(num);
        }
        sort(number.begin(),number.end());
        
        if(number.size()%2!=0)
        {
            return number[number.size()/2];
        }
        else
        {
            return (number[number.size()/2-1]+number[number.size()/2])/2.0;
        }
        
    }
};
