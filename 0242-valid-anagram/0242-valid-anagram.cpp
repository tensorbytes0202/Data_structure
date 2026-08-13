class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        if(s.length()!=t.length()){
            return false;
        }
        else{

        for(char c:s){
            mp[c]++;
        }
        for(char c:t){
            if(mp[c]==0){  // maan lo s me 3 a and and t me 2 and s
            // ko map karwana h 3rd wale a pe s ke t khatam yani 0 ho jayega to false;
                return false; 
            }
            mp[c]--;
        }
        }
        return true;
        
    }
};