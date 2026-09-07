class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string c =strs[0];
        for(int i =1;i<strs.size();i++){
            int j =0;
            while(j<c.size()&&j<strs[i].size()&&c[j]==strs[i][j]){
                j++;
            }
            c= c.substr(0,j);
       
        }
        
    return c ;
    }

};