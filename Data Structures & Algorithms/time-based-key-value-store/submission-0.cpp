class TimeMap {
public:
unordered_map<string,vector<pair<int,string>>>keymap;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        keymap[key].emplace_back(timestamp,value);
        
    }
    
    string get(string key, int timestamp) {
        auto values=keymap.find(key);
        if(values==keymap.end())
        {
            return "";
        }
        int l=0;
        int r=values->second.size()-1;
        string ans="";
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(values->second[mid].first<=timestamp)
            {
                ans=values->second[mid].second;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }

        }
       return ans; 
    }
};
