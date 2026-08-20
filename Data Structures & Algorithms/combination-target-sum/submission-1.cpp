class Solution {
public:
    void combi(int i,vector<int>& nums,int target,vector<int>&level,vector<vector<int>>&ans){
        if(target==0){
            ans.push_back(level);
            return;
        }
        if(i==nums.size() || target<nums[i]){
            return ;
        }
        level.push_back(nums[i]);
        combi(i,nums,target-nums[i],level,ans);
        level.pop_back();
        combi(i+1,nums,target,level,ans);
    }
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
     vector<vector<int>>ans;
     sort(nums.begin(),nums.end());
     vector<int>level;
     combi(0,nums,target,level,ans);
     return ans;
    }
};
