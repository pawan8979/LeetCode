class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
         int k = p.size();
      int n = s.size();
      vector<int> ans;
      unordered_map<char, int>mp;
      for(int i = 0; i < k; i++){
          mp[p[i]]++;
      }
      int i = 0, j = 0;
      int cnt = mp.size();
      
      while(j < n){
          //cal
          char x = s[j];
          if(mp.find(x) != mp.end()){
              mp[x]--;
             
              if(mp[s[j]] == 0)cnt--;
          }
          
          if(j-i+1 < k){
              j++;
          }
          else if(j-i+1 == k){
              //operation and ans
              if(cnt == 0){
                  ans.push_back(i);
              }
    
              if(mp.find(s[i]) != mp.end()){
                  mp[s[i]]++;
                  if(mp[s[i]] == 1)cnt++;
              }
              i++;
              j++;
          }
      }
      return ans;
    }
};