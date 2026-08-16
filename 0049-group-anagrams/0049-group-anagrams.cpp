class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> arr;
        for(string s : strs){
            string key =s;
            sort(key.begin(),key.end());
            mp[key].push_back(s);
        }
        for(auto &pair :mp){
            arr.push_back(pair.second);
        }

        return arr;


        

        
    }
};