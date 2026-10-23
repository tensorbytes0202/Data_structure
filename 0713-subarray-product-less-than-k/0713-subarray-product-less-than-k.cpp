class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int low =0;
        int product =1;
        int count =0;
        int high =0;
        int n = nums.size();
        if(k<=1)
        return 0;
        while(high<n){
            product *= nums[high];
        
            while(product>=k){
            product  /= nums[low];
            low++;
            }
            count += high -low+1;
            high++;

        }
        return count++;
    }
};