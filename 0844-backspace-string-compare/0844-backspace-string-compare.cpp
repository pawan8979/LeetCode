class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1, s2;

        // for solving string 1
        for (char c : s) {
            if (c != '#') {
                s1.push(c);
            } else if (!s1.empty()) {
                s1.pop();
            }
        }

        // for solving string 2
        for (char c : t) {
            if (c != '#') {
                s2.push(c);
            } else if (!s2.empty()) {
                s2.pop();
            }
        }

        // compare the modified strings
        while (!s1.empty() && !s2.empty()) {
            if (s1.top() != s2.top()) {
                return false;
            }
            s1.pop();
            s2.pop();
        }

        // if both stacks are empty, strings are equal after backspacing
        return s1.empty() && s2.empty();
    }
};
