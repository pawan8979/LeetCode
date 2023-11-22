class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid;
        while(s<=e)
        {
            mid=(s+e)/2;
            if(target==nums[mid])
                return mid;
            else if(target>nums[mid])
                s=mid+1;
            else
                e=mid-1;      
        }
        if(target<nums[mid]) return mid;
         else return mid+1;
    }
};