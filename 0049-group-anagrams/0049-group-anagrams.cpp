//optimized
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> str;
        vector<vector<string>> vtr;
        map<vector<int>,vector<string>> m;
        for(int i=0;i<strs.size();i++){
            vector<int> v(26,0);
            for(auto i:strs[i])
                 v[i-'a']++;

            m[v].push_back(strs[i]);
        }
        
        for(auto i:m)
          vtr.push_back(i.second);

        return vtr;
    }
};