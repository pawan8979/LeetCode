class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        int ans=0, odd=0;
        
        for(auto value: s) mp[value]++;
        for(auto value : mp)
        {
            if(value.second % 2 == 0) ans+= value.second;
            else 
            {
                ans+= value.second - 1;
                odd = 1;
            }
        }
        if(odd) ans++;
        return ans;
    }
};