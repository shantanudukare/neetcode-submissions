class Solution {
public:
     int cos(int i,vector<int>& cost,vector<int>&dp){
        int n= cost.size();
        if(i>=n){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        return dp[i]=min((cos(i+1,cost,dp)+cost[i]),(cos(i+2,cost,dp)+cost[i]));
     }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n,-1);
        return min(cos(0,cost,dp),cos(1,cost,dp));
    }
};
