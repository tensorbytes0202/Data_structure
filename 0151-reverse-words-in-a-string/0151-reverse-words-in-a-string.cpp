class Solution {
public:
    string reverseWords(string s) {

        stringstream ss(s);
        string word;
        vector<string> ans;

        while (ss >> word) {
            ans.push_back(word);
        }

        reverse(ans.begin(), ans.end());

        string result = "";

        for (string w : ans) {
            result += w + " ";
        }

        result.pop_back();

        return result;
    }
};