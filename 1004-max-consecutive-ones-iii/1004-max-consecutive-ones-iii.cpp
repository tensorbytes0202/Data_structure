class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low = 0;
        int high = 0;
        int zero = 0;
        int maxlen = 0;
        int n = nums.size();

        while (high < n) {
            if (nums[high] == 0) {
                zero++;
            }

            while (zero > k) {
                if (nums[low] == 0) {
                    zero--;
                }
                low++;
            }

            maxlen = max(maxlen, high - low + 1);
            high++;
        }

        return maxlen;
    }
};