
class Solution {
public:
    bool fun(vector<int>& position, int n, int k, int guess) {
        int balls = 1;
        int magnetpos = position[0];

        for (int i = 1; i < n; i++) {
            int dist = position[i] - magnetpos;

            if (dist >= guess) {
                balls++;
                magnetpos = position[i];
            }

            if (balls >= k) {
                return true;
            }
        }

        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        int n = position.size();

        sort(position.begin(), position.end());

        int low = 1;
        int high = position[n - 1] - position[0];
        int res = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (fun(position, n, m, mid)) {
                res = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return res;
    }
};

