class Solution {
public:
    double myPow(double x, int n) {

        long long N = n;

        // handle negative power
        if(N < 0) {
            x = 1 / x;
            N = -N;
        }

        double ans = 1;

        for(int i = 0; i < N; i++) {
            ans = ans * x;
        }

        return ans;
    }
};