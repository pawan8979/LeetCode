class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans = 0;
        for(auto i : nums) ans ^= i;    // xor-ing all elements of array
        return ans;
    }
};