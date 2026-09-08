class Solution {
public:
    bool isPalindrome(string s) {
     string temp = "";
     for(char ch:s){
        if(isalnum(ch)){
            temp += tolower(ch);
        }
     }
     s =temp;
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