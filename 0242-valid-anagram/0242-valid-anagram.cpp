class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.size();
        int n2=t.size();
        if(n1!=n2)
        {
            return false;
        }
        unordered_map<char,int> m;
        for(int i=0;i<n1;i++)
        {
            m[s[i]]++;
        }
        for(int i=0;i<n2;i++)
        {
            m[t[i]]--;
        }
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second !=0)
            {
                return false;
            }
        }
        return true;
    }
};