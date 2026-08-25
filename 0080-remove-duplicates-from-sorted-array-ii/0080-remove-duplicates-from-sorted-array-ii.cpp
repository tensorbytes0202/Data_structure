class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2){
            return nums.size();
        }
        int i =1;
        for(int j =2;j<nums.size();j++){
            if(nums[j]!=nums[i-1]){
                i++;
                nums[i] =nums[j];
            }
        }  
        return i+1;
        }
};
// Step 1 — j = 2
// nums[j] = nums[2] = 1
// nums[i-1] = nums[0] = 1

// Check:

// 1 != 1   ❌

// Kuch nahi karna.

// i = 1
// j = 2

// [1, 1, 1, 2, 2, 3, 3, 3]
//     ↑  ↑
//     i  j