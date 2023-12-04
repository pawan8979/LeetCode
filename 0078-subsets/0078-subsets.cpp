class Solution {
private:
    void helper(int start, vector<int> nums, vector<vector<int>>& ans, vector<int> output)
    {
        ans.push_back(output); //[]
        for(int i=start;i<nums.size();i++)
        {
            output.push_back(nums[i]); //[1]
            //now below call will find all the possible subset with 1
            helper(i+1, nums, ans, output);
            //now after finding possible subset backtrack
            output.pop_back();//[]
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        helper(0, nums, ans, output);
        return ans;
    }
};