class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1;
        stack<char>s2;

        // for solving string 1

        for(int i=0;i<s.size();i++){
           
            if(s[i]>='a' &&s[i]<='z')
                s1.push(s[i]);
            
                else if(s[i]=='#'){
                    if(!s1.empty())
                    s1.pop();
                }
        }
         // storing element into string

        string st=" ";
        while(!s1.empty()){
            st+=s1.top();
            s1.pop();
        }

        // for solving string 2

         for(int i=0;i<t.size();i++){
              if(t[i]>='a' && t[i]<='z')
                s2.push(t[i]);
              
               else if(t[i]=='#'){
                   if(!s2.empty())
                    s2.pop();
         }
    }
        string st2=" ";
        while(!s2.empty()){
            st2+=s2.top();
            s2.pop();
        }

        if(st==st2)
        return true;
        if(st.empty() && st2.empty())
        return true;
        return false;
    }
};