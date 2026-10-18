class Solution {
public:
    int maxVowels(string s, int k) {
        int low =0;
        int n = s.size();
        int high =k-1;
        int count =0;
        for(int i =low;i<=high;i++){
             if (s[i] == 'a' || s[i] == 'e' ||
    s[i] == 'i' || s[i] == 'o' ||
    s[i] == 'u'){
            count++;
        }
        }
        int maxcount =count;
        while(high<n-1){
        if (s[low] == 'a' || s[low] == 'e' ||
    s[low] == 'i' || s[low] == 'o' ||
    s[low] == 'u') {
    count--;
        }
        low++;
        high++;
        if (s[high] == 'a' || s[high] == 'e' ||
    s[high] == 'i' || s[high] == 'o' ||
    s[high] == 'u') {
    count++;
}
        maxcount = max(maxcount,count);
        }
        return maxcount;
    }
};