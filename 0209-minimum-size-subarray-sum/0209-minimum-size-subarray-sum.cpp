class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,sum=0,mn=INT_MAX,flag=0;
        while(j<=nums.size()-1){
            sum+=nums[j];
            if(sum>=target){
                int x=j-i+1;
                flag=1;
                mn=min(mn,x);
                sum-=nums[i];
                i++;
            }
            while(sum>=target){
                mn=min(mn,j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        if(flag==0) return 0;
        return mn;
    }
};