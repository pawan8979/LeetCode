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
            output.push_back(nums[i]);
            helper(i, target-nums[i], nums, output, ans);
            output.pop_back();
        }
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> output;
        helper(0, target, nums, output, ans);
        return ans;
    }
};