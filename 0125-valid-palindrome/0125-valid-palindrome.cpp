class Solution {
public:
    bool isPalindrome(string s) {
     s.erase(remove_if(s.begin(), s.end(), [](char ch) {
    return !isalnum(ch);
}), s.end());

transform(s.begin(), s.end(), s.begin(), ::tolower);
         int left =0;
         int right =s.size()-1;
         while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
                left++;
                right--;
            }
            
         return true;
    }
};