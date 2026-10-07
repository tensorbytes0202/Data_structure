
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        int count = 0;
        vector<int> candies(n);

        // Init: har bachche ko 1 candy
        for(int i =0;i<n;i++){
            candies[i] = 1;
        }

        // Left -> Right pass: left neighbour se compare
        for(int i =1;i<n;i++){
            if(ratings[i] > ratings[i-1]){
                candies[i] = candies[i-1] + 1;
            }
        }

        // Right -> Left pass: right neighbour se compare
        for(int i =n-2;i>=0;i--){
            if(ratings[i] > ratings[i+1]){
                candies[i] = max(candies[i], candies[i+1] + 1);
            }
        }

        // Sum
        for(int i =0;i<n;i++){
            count += candies[i];
        }

        return count;
    }
};