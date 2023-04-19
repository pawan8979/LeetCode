class Solution {
public:
    int longestPalindrome(string s) {
        int ans = 0, odd = 0;
        map<char, int> mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        for(auto it: mp)
        {
            if(it.second %2 ==0)
                ans+=it.second;
            else
            {
                ans+=it.second-1;
                odd=1;
            }
                
        }
        if(odd)
            return ans+1;
        else
            return ans;
    }
};