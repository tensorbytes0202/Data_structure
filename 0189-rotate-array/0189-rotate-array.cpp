class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n = nums.size();
         k = k%n;
        vector<int> arr(n);
        for(int i =0;i<nums.size();i++){
            int newIndex = (i+k)%n;
            arr[newIndex] = nums[i] ;
        }

        nums = arr;
       
       
        
    }
};