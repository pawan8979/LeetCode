class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i=0;i<s.size();i++)
        {
            if(isupper(s[i]))
                s[i]= tolower(s[i]);
            if(isalnum(s[i]))
                str.push_back(s[i]);
            
        }
        int j= str.length()-1;
        for(int i=0; i<str.length()/2;i++)
        {
            if(str[i]!=str[j])
                return false;
            else
                j--;
        }
        return true;
    }
};


