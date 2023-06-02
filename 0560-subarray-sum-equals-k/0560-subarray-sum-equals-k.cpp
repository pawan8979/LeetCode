class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp.insert({0,1});
        int cumsum= 0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            cumsum+= nums[i];
            auto it=mp.find(cumsum-k);
            if(it != mp.end())
            {
                count+= it->second;
            }
            auto itr= mp.find(cumsum);
            if(itr != mp.end())
                itr->second++;
            else
                mp.insert({cumsum,1});
        }

        return count;
    }
};