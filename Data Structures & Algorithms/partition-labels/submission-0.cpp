class Solution {
public:
    vector<int> partitionLabels(string s) {

    unordered_map<char,int>lst_idx;
    for(int i=0;i<s.size();i++)
    {
        lst_idx[s[i]]=i;
    }
    int subsize=0;
    int last_pos=0;
     vector<int>ans;
     for(int i=0;i<s.size();i++)
     {   subsize++;
         last_pos=max(last_pos,lst_idx[s[i]]);
         if(i==last_pos)
         {
            ans.push_back(subsize);
            subsize=0;
         }

     }
    return ans;
        
    }
};
