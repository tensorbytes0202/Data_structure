class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int low =0;
        int high =0;
        int maxLen =0;
        while(high<s.size()){
            if(st.find(s[high])!=st.end()){
                st.erase(s[low]);
                low++;
            }else{
                st.insert(s[high]);
                maxLen = max(maxLen,high-low+1);
                high++;
            }
        }
        return maxLen;
    }
};