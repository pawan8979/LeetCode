class Solution {
public:
  bool backspaceCompare(string s, string t) {
        string ans = "";
        int hc = 0;

        // For string 1
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == '#') {
                hc++;
                continue;
            }
            if (hc > 0) {
                hc--;
            } else {
                ans = s[i] + ans;
            }
        }
        s=ans;
        ans="";

        // For string 2
        hc = 0;  // Reset the backspace counter
        for (int i = t.length() - 1; i >= 0; i--) {
            if (t[i] == '#') {
                hc++;
                continue;
            }
            if (hc > 0) {
                hc--;
            } else {
                ans = t[i] + ans;
            }
        }
        t=ans;

        return (s == t);
    }
};