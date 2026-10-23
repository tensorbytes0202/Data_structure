class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low = 0;
        int maxLen = 0;

        unordered_map<int, int> freq;

        for (int high = 0; high < fruits.size(); high++) {

            freq[fruits[high]]++;
            //haar element ki freq. add karo
            while (freq.size() > 2) {
                //distinct ele ka count check karo 2 se zyada hote hi remove kar do
                freq[fruits[low]]--;
            
                if (freq[fruits[low]] == 0) {
                    freq.erase(fruits[low]);
                }

                low++;
            }

            int len = high - low + 1;
            maxLen = max(maxLen, len);
        }

        return maxLen;
    }
};