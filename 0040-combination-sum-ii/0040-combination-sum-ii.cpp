class Solution {
private:
    void helper(int start, int target, vector<int> nums, vector<int> output, vector<vector<int>>& ans)
    {
        if(target==0)
        {
            ans.push_back(output);
            return;
        }
        if(target<0) return;
        for(int i=start; i<nums.size();i++)
        {
            if(i>start && nums[i]==nums[i-1]) continue;
            output.push_back(nums[i]);
            helper(i+1, target-nums[i], nums, output, ans);
            output.pop_back();
        }
        
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> output;
        sort(nums.begin(), nums.end());
        helper(0, target, nums, output, ans);
        return ans;
    }
};