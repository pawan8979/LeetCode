class Solution {
public:
    //TC: O(n)
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp.insert({0,1});
        int count = 0;
         int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            sum = sum + nums[i];
            auto it = mp.find(sum-k);
            if(it != mp.end())
            {
                count+= it->second;
            }
            auto itr = mp.find(sum);
            if(itr!=mp.end())
            {
                itr->second++;
            }
            else mp.insert({sum,1});
        }
        return count;
    }
};