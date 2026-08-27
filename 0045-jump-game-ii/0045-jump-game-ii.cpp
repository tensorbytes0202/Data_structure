class Solution {
     public:
    int jump(vector<int>& nums) { 
    int jumps =0;
    int currentEnd = 0;
    int farthest = 0; 
    for(int j =0;j<nums.size()-1;j++){ 
        farthest = max(farthest , j+nums[j]); 
        if(j== currentEnd){ 
        jumps++; 
        currentEnd = farthest;
         } 
         }
          return jumps; 
          } 
          };