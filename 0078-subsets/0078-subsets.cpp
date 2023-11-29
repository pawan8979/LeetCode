class Solution {
private:
    void helper(int index, vector<int> nums, vector<vector<int>>& ans, vector<int> output)
    {
        //base case
        if(index >= nums.size())
        {
            ans.push_back(output);
            return;
        }
        //exclude
        helper(index+1, nums, ans, output);
        //include
        int element = nums[index];
        output.push_back(element);
        helper(index+1, nums, ans, output);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        helper(index, nums, ans, output);
        return ans;
    }
};