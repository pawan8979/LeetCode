class Solution {
    private:
    void solve(vector<vector<int>> &ans, vector<int> nums, int index){
        if(index>=nums.size()-1)
        {
            ans.push_back(nums);
            return;
        }
        for(int j=index;j<nums.size();j++)
        {
            swap(nums[j],nums[index]);
            solve(ans, nums, index+1);
            swap(nums[j],nums[index]);
        }
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        solve(ans, nums, index);
        return ans;
    }
};