class Solution {
public:
bool isVowel(char ch) { 
    return ch == 'a' || ch == 'e' 
    || ch == 'i' || ch == 'o' 
    || ch == 'u';
     }
    int maxVowels(string s, int k) {
        int low =0;
        int n = s.size();
        int high =k-1;
        int count =0;
        for(int i =low;i<=high;i++){
             if (isVowel(s[i])){
            count++;
        }
        }
        int maxcount =count;
        while(high<n-1){
        if (isVowel(s[low])) {
    count--;
        }
        low++;
        high++;
        if (isVowel(s[high])) {
    count++;
}
        maxcount = max(maxcount,count);
        }
        return maxcount;
    }
};