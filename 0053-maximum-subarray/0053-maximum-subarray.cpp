class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum =nums[0];
        int currsum = 0;
        for(int j =0;j<nums.size();j++){
                currsum += nums[j];
maxsum = max(maxsum,currsum);
        
          if(currsum<0){
                currsum =0;
            }
        }
            return maxsum;
        
    }
};