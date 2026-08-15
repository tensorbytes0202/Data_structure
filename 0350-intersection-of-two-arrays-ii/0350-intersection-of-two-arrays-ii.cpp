class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        vector<int> arr;
        for(int i :nums1){
            mp[i]++;
        }

        for(int i :nums2){
            if(mp[i]>0){
                arr.push_back(i);
            
            }
            mp[i]--;

        }
        return arr;
        //sirf difference consume karane ka h 349 se 
    }   
};