class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mp;
        int count =0;
        for(char c :jewels){
            mp[c]++;
        }
        for(char c: stones){
            if(mp[c]>0){
                count++;
            }
            
        }
        return count;
        
    }
};