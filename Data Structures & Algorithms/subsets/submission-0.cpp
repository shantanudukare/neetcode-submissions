class Solution {
   public:
    void sets(int i, vector<int>& nums, vector<vector<int>>& ans, vector<int>& level) {
        if (i == nums.size()) {
            ans.push_back(level);
            return;
        }
        level.push_back(nums[i]);
        sets(i + 1, nums, ans, level);
        level.pop_back();
        sets(i + 1, nums, ans, level);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> level;
        sets(0, nums, ans, level);
        return ans;
    }
};
