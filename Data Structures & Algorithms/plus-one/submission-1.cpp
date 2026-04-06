class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      reverse(digits.begin(),digits.end());
      int reminder=1;
      int sum=0;
      for(int i=0;i<digits.size();i++)
      {
               sum=digits[i]+reminder;
               if(sum==10)
               {
                digits[i]=0;
                reminder=1;
               }
               else{
                digits[i]=sum;
                reminder=0;
                break;
               }
      }
      if(reminder==1)
      {
        digits.push_back(1);
      }
      reverse(digits.begin(),digits.end());
      return digits;
        
    }
};
