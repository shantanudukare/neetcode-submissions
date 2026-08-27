class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n = nums.size();
       vector<int>arrf(n,1);
       int x=1;
       for(int i=0;i<n;i++){
        arrf[i]=x;
        x*=nums[i];
       }
      
       x=1;
       for(int i=n-1;i>=0;i--){
         arrf[i]*=x;
         x*=nums[i];
       }
       return arrf;
    }
};
