class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int ans = 0;
        int n = position.size();
        vector<vector<int>>nums;
        stack<pair<int,int>>st;
        for(int i=0;i<n;i++){
            nums.push_back({position[i],speed[i]});
        }
        sort(nums.begin(),nums.end());
        double lasttime = 0;
        for(int i=n-1;i>=0;i--){
           double time = double(target-nums[i][0])/nums[i][1];
           if(time>lasttime){
            ans++;
            lasttime = time;
           }
        }

  
        return ans;
    }
};
