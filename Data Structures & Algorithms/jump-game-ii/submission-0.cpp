class Solution {
public:
    int jump(vector<int>& nums) {
        int ans=0;
        int prev =0 ;
        int x = nums[0];
        for(int i=0;i<nums.size()-1;i++){
            x= max(x,i+nums[i]);
            if(i==prev){
                ans++;
                prev=x;
            }
        }
        return ans;
    }
};
