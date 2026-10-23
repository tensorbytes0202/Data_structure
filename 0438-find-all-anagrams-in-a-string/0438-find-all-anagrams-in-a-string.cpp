    class Solution {
    public:
        vector<int> findAnagrams(string s, string p) {
            int low =0;
            vector<int> ans;
            unordered_map<char,int> freqp;
            unordered_map<char,int> freqs;
            for(char ch : p){
                freqp[ch]++;
            }
            for(int high =0;high<p.size();high++){
                freqs[s[high]]++;
            }
            if(freqp == freqs){
                ans.push_back(0);
            }
            for(int high =p.size();high< s.size();high++){
                freqs[s[low]]--;
            if(freqs[s[low]]==0){
                freqs.erase(s[low]);
            }
            low++;
            freqs[s[high]]++;
            if(freqp ==  freqs){
                ans.push_back(low);
            }
            }
            return ans;
        }
    };