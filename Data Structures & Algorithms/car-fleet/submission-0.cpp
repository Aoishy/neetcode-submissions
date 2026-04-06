class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        vector<pair<int,int>>cars;
        for(int i=0;i<position.size();i++)
        {
            cars.push_back({position[i],speed[i]});
        }
        sort(cars.rbegin(),cars.rend());
        vector<double>ans;
        for(auto car:cars)
        {
               ans.push_back((double)(target-car.first)/car.second);
               
               if(ans.size()>=2&&ans.back()<=ans[ans.size()-2])
               {
                ans.pop_back();
               }
        }
        return ans.size();
    }
};
