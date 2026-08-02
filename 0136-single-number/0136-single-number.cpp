class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        for(int i =0; i<nums.size();i++){
            int ans = 0;
        for(int j =0;j<nums.size();j++){
            if(nums[i]==nums[j]){
                ans++;
            }
        }
        
        if(ans==1)
        return nums[i];
        }
        return 0;
    }
};