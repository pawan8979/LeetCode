class Solution {
private:
    void helper(int start, vector<int>& nums, vector<int>& output, vector<vector<int>>& ans) {
        ans.push_back(output);
        for (int i = start; i < nums.size(); i++) {
            if (i != start && nums[i] == nums[i - 1]) continue;
            output.push_back(nums[i]);
            helper(i + 1, nums, output, ans);
            output.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        sort(nums.begin(), nums.end());  // Sorting to handle duplicates
        helper(0, nums, output, ans);
        return ans;
    }
};
