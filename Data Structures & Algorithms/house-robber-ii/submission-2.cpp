class Solution {
public:
    int robb0(vector<int>& nums,vector<int>&dp0,int i){
         int n = nums.size();
         if(i>=n-1)return 0;
         if(dp0[i]!=-1)return dp0[i];
         int take = nums[i]+robb0(nums,dp0,i+2);
         int nottake = robb0(nums,dp0,i+1);
         return dp0[i]=max(take,nottake);
    }

    int robb1(vector<int>& nums,vector<int>&dp1,int i){
         int n = nums.size();
         if(n==1)return nums[0];
         if(i>=n)return 0;
         if(dp1[i]!=-1)return dp1[i];
         int take = nums[i]+robb1(nums,dp1,i+2);
         int nottake = robb1(nums,dp1,i+1);
         return dp1[i]=max(take,nottake);
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp0(n,-1);
        vector<int>dp1(n,-1);
       return max (robb0(nums,dp0,0),robb1(nums,dp1,1));
    }
};
