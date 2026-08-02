class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;
        int freq[128] = {0};
        for(char ch : jewels){
            freq[ch] = 1;
        }
        for(char ch : stones){
            if(freq[ch]==1){
                ans++;
            }

        }
        return ans;
        
    }
};