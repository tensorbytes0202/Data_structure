class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       int freq[26] = {0};
       for(char ch : magazine){
        freq[ch-'a']++;
       }
       for( char ch : ransomNote){
        freq[ch - 'a']--;
        if(freq[ch - 'a']<0)
        return false;
       }
       return true;
    }
};
// Pehle magazine ki frequency count kar rahe hain, fir ransom ki..."

// ✅ Sahi.

// Lekin ransom ki frequency alag se count nahi kar rahe.

// Hum ransom ke characters ko magazine ki frequency se consume (use) kar rahe hain.