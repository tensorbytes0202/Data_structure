class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, char> mp1; // s -> t
        unordered_map<char, char> mp2; // t -> s

        for (int i = 0; i < s.size(); i++) {

            char a = s[i];
            char b = t[i];

            // s -> t mapping check
            if (mp1.find(a) != mp1.end()) {
                if (mp1[a] != b) {
                    return false;
                }
            }

            // t -> s mapping check
            if (mp2.find(b) != mp2.end()) {
                if (mp2[b] != a) {
                    return false;
                }
            }

            // Store mapping
            mp1[a] = b;
            mp2[b] = a;
        }

        return true;
    }
};