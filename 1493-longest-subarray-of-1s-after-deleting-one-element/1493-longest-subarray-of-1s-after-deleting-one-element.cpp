class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int low = 0;
        int high =0;
        int zero =0;
        int maxlen =0;
        int n = nums.size();
        while(high<n){
            if(nums[high]==0){
                zero++;
            }
            while(zero>1){
                if(nums[low]==0){
                    zero--;
                }
                low++;
            }

                int len = high - low+1;
                maxlen = max(maxlen,len);

            high++;
        }
        return maxlen-1;
    }
};