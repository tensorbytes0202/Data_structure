class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        for(int num:nums1){
            mp[num]++;
        }
        vector<int> ans;
        for(int num : nums2){
            if(mp[num]>0){
                ans.push_back(num);
                mp[num]--;
            }            
                
            }
        return ans;
    }
};

// //Pehle nums1 ke saare unique elements ko unordered_set me store karte hain taaki fast search kar sakein.
// Phir nums2 ke har element ko set me check karte hain ki wo present hai ya nahi.
// Agar element milta hai to usko answer me add kar dete hain.
// Element ko set se remove kar dete hain taaki same element dobara answer me na aaye.