class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size()-1;
        int count =0;
         // Last ke spaces skip karo
        while(i>=0&&  s[i]==' '){
            i--;
        }
        // Last word ke characters count karo
        while(i>=0 && s[i]!= ' '){
            count++;
            i--;
        }
        return count;
                   }
};