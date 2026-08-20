class Solution {
public:
    int robb(vector<int>& nums,int i,vector<int>&dp){
        int n=nums.size();
        if(i>=n)return 0;
        if(dp[i]!=-1)return dp[i];
       int take = nums[i]+robb(nums,i+2,dp);
       int nottake=robb(nums,i+1,dp);
       return dp[i]=max(take,nottake);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,-1);
        return robb(nums,0,dp);
    }
};
