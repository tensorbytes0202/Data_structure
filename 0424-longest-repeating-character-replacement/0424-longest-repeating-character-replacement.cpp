class Solution {
public:
    int characterReplacement(string s, int k) {
        int low = 0;
        int maxLen = 0;
        int maxFreq =0;
        unordered_map<int,int> freq;
      for(int high = 0;high<s.size();high++){
            freq[s[high]]++;
             maxFreq = max(maxFreq,freq[s[high]]);
            while((high-low+1)-maxFreq>k){
                freq[s[low]]--;
            low++;
            }
            maxLen = max(maxLen,high-low+1);

        }
        return maxLen;
    }
};