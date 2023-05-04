class Solution {
public:
// o(1) space
    int missingNumber(vector<int>& nums) {
       int sum= 0;
        for(int i=0;i<nums.size();i++)
            sum+= nums[i];
        int n= nums.size();
        int expected_sum= n*(n+1)/2;
        return expected_sum - sum;
    }
};