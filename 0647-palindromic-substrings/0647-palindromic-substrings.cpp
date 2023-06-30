class Solution {
public:
    void helper(string& s, int i, int j, int& ans){
        while(i >=0 && j < s.size() && s[i] == s[j]){
            i--; j++; ++ans;
        }
    }
    int countSubstrings(string s) {            
        int ans = 0;
        for(int i = 0; i < s.size(); i++){
            helper(s, i, i, ans);
            helper(s, i, i+1, ans);
        }
        return ans;
    }
};