class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int sum = 0;
            if(i>0 && nums[i]==nums[i-1])continue;
            int l =i+1,r=nums.size()-1;
            
            while(l<r){
                int sum = nums[i]+nums[l]+nums[r];
                if(sum==0){
                    ans.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    while(nums[l]==nums[l-1] && l<r)l++;
                    r--;
                    while(nums[r]==nums[r+1] && l<r)r--;
                }else if(sum<0){
                    l++;
                    while(nums[l]==nums[l-1] && l<r)l++;
                }else{
                    r--;
                    while(nums[r]==nums[r+1] && l<r)r--;
                }
            }
        }
        return ans;
    }
};
