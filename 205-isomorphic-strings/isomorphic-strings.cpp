class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        for (int a = 0; a < s.size(); a++) {
            for (int b = a + 1; b < s.size(); b++) {
                if (s[a] == s[b]) {
                    if (t[a] != t[b]) {
                        return false;
                    }
                }
                if (s[a] != s[b]) {
                    if (t[a] == t[b]) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};