
class Solution {
public:
    long long fun(vector<int>& piles, int speed) {
        long long hours = 0;

        for (int i = 0; i < piles.size(); i++) {
            hours += piles[i] / speed;

            if (piles[i] % speed != 0) {
                hours++;
            }
        }

        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            long long hours = fun(piles, mid);

            if (hours <= h) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};

