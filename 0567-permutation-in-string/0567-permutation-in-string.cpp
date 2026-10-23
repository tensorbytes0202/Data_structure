class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int low =0;
        if (s1.size() > s2.size()) { return false; }
        unordered_map<char,int> freqs1;
        unordered_map<char,int> freqs2;
        for(char ch : s1){
            freqs1[ch]++;
        }
        for(int high = 0;high<s1.size();high++){
            freqs2[s2[high]]++;
        }
        if(freqs1 == freqs2){
            return true;
        }
        for(int high =s1.size();high<s2.size();high++){
            freqs2[s2[low]]--;
            if(freqs2[s2[low]]==0){
                freqs2.erase(s2[low]);
            }
            low++;
            freqs2[s2[high]]++;
            if (freqs1 == freqs2) {
    return true;
}
        }
        return false;
    }
};