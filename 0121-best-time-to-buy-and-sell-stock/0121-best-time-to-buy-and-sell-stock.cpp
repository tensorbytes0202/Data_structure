class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int curr = prices[0];
        int currprofit = 0;
        int maxprofit = 0;

        for(int i = 1; i < prices.size(); i++) {

            if(prices[i] < curr) {
                curr = prices[i];
            }

            currprofit = prices[i] - curr;

            maxprofit = max(maxprofit, currprofit);
        }

        return maxprofit;
    }
};