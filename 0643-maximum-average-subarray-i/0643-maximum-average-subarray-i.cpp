
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int low = 0;
        int high = k - 1;
        int sum = 0;
        int maxSum = INT_MIN;

        // First window
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        maxSum = sum;

        // Slide the window
        while (high < n - 1) {
            sum = sum - nums[low];
            low++;

            high++;
            sum = sum + nums[high];

            maxSum = max(maxSum, sum);
        }

        return (double)maxSum / k;
    }
};

