//  class Solution {
// public:
//     int findMin(vector<int>& nums) {
        
//         int mini = INT_MAX;
        
//         for(int i=0;i<nums.size();i++){
//             mini = min(nums[i],mini);
//         }
//         return mini;
//     }
// };

// Better Approach
// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int low = 0;
//         int high = nums.size() - 1;
//     // If the array is not rotated
//         if (nums[low] <= nums[high]) {
//             return nums[low];
//         }

//         // Binary search
//         while (low <= high) {
//             int mid = (low + high) / 2;

//             // Check if mid is the minimum element
//             if (mid > 0 && nums[mid] < nums[mid - 1]) {
//                 return nums[mid];
//             }
            

//             // If the right half is sorted, the minimum element
//             // must be in the left half
//             if (nums[mid] > nums[high]) {
//                 low = mid + 1;
//             }

//             // If the left half is sorted, the minimum element
//             // must be in the right half
//             else {
//                 high = mid - 1;
//             }
//         }
//     // If no minimum element is found, return -1
//     return -1;
//     }
// };

//Best Approach

class Solution {
 public:
  int findMin(vector<int>& nums) {
    int l = 0;
    int r = nums.size() - 1;

    while (l < r) {
        int m = (l + r) / 2;
      if (nums[m] < nums[r])
        r = m;
      else
        l = m + 1;
    }

    return nums[l];
  }
};