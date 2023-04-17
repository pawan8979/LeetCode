class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int dict[26]={0};
        for(auto letter:magazine){
            dict[letter-97]++;
        }
        for(auto letter:ransomNote){
            if(dict[letter-97]==0)
                return false;
            else
                dict[letter-97]--;
        }
        return true;
    }
};