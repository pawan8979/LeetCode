class Solution {
public:
   vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int p=0, q=nums.size()-1;
        int k= nums.size()-1;
        while(p<=q)
        {
            if(nums[p]*nums[p] > nums[q]*nums[q])
            {  
                ans[k--]= nums[p]*nums[p];
                p++;
            }
            else
            {
                ans[k--]= nums[q]*nums[q];
                q--; 
            }
        }
        return ans;
    }
};