// class Solution {
// public:
// TC: O(n)
// SC: O(1)
//     int findPeakElement(vector<int>& nums) {
//         int index= 0;
//         int i=0;
//         for(; i<nums.size()-1; i++)
//         {
//             if(nums[index]<nums[i+1])
//                 index= i+1;
//         }
//         return index;
//     }
// };

class Solution {
public:
//TC: O(log(n))
// SC: O(1)
    int findPeakElement(vector<int>& nums) {
     int s=0, e= nums.size()-1;
     while(s<e)
     {
         int mid= s+(e-s)/2;
         if(nums[mid]>nums[mid+1])
            e= mid;
        else
            s= mid+1;
     }
     return s;
    }
};