class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        //saare elements set mein store karo 
        for(int x:nums){
            st.insert(x);
        }
            int ans =0;     
        for(int a :st){
            if(st.find(a-1)==st.end()){
                int current =a;
                int count=1;
                //Consecutive numbers check karo
                while(st.find(current+1)!=st.end()){
                //"Kya current ke just next wala number set ke andar present hai?"
                    current++;
                    count++;
                }
                ans = max(ans,count);
            }
        }
        return ans;
        
    }
};