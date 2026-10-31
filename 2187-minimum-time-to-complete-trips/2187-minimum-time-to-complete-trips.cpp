class Solution {
public:

    bool tripPossible(vector<int>& time, int totalTrips, long long t) {

        long long count = 0;

        for(int i = 0; i < time.size(); i++) {

            count += t / time[i];

        }

        return count >= totalTrips;
    }

    long long minimumTime(vector<int>& time, int totalTrips) {

        long long low = *min_element(time.begin(), time.end());

        long long high = low * totalTrips;

        long long ans = high;

        while(low <= high) {

            long long mid = low + (high - low) / 2;

            if(tripPossible(time, totalTrips, mid)) {

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