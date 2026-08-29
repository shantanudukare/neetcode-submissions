class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        if(nums.size()==0)return 0;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int ans = 0;
        for(auto num:st){
            int count =0;
            if(st.find(num-1)==st.end()){
                int curr = num;
                while(st.find(curr)!=st.end()){
                count++;
                curr++;
                }
                ans = max(ans,count);
            }
        }

        return ans ;
    }
};
