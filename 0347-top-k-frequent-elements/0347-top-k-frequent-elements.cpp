class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int num:nums){
            freq[num]++;
        }

        // Create the Bucket then use auto for free datatype then num and count for the 
        //values of both bucket me value ki freq ke hisab se uss pos pe daal diya mene
       vector<vector<int>> bucket(nums.size()+1);
       for(auto it:freq){
        int num = it.first;
        int count = it.second;
        bucket[count].push_back(num);

       }
        //Traverse from the highest frequency
        vector<int> ans;
        // iss case me bucket me jiss value ki freq 2 se zyada hogi wohi ayega ans
        for(int i =  nums.size();i>=1;i--){
            for(int num:bucket[i]){
                ans.push_back(num);
                if(ans.size()==k){
                    return ans;
                }
            }
        }
        return ans;
    }
};