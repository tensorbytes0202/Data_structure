class Solution {
public:
    bool wordPattern(string pattern, string s) {

        vector<string> words;
        stringstream ss(s);
        string word;

        while (ss >> word) {
            words.push_back(word);
        }

        if (pattern.size() != words.size()) {
            return false;
        }

        unordered_map<char, string> mp1;   // pattern -> word
        unordered_map<string, char> mp2;   // word -> pattern

        for (int i = 0; i < pattern.size(); i++) {

            char a = pattern[i];
            string b = words[i];

            // pattern -> word
            if (mp1.find(a) != mp1.end()) {
                if (mp1[a] != b) {
                    return false;
                }
            }

            // word -> pattern
            if (mp2.find(b) != mp2.end()) {
                if (mp2[b] != a) {
                    return false;
                }
            }

            mp1[a] = b;
            mp2[b] = a;
        }

        return true;
    }
};