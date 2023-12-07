class Solution {
private:
    void helper(int o, int c, string current, vector<string>& ans, int n)
    {
        if(current.size()==2*n)
        {
            ans.push_back(current);
            return;
        }
        if(o<n)  helper(o+1,c,current+"(",ans,n);
        if(c<o)  helper(o,c+1,current+")",ans,n);
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        helper(0,0,"",ans,n);
        return ans;
    }
};