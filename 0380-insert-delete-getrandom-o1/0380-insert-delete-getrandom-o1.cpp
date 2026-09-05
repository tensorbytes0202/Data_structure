class RandomizedSet {
    vector<int> nums;
    unordered_map<int,int> mp;
      
public:
    RandomizedSet() {
             
    }
    
    bool insert(int val) {
     if(mp.find(val)!=mp.end()){
        return false;
     }
     nums.push_back(val);
     mp[val] =nums.size()-1;
     return true;
        
    }
    
    bool remove(int val) {
       if(mp.find(val)==mp.end()){
        return false;
       }
        int index = mp[val];
        //index naam ke variable me mp ki val ka index jo remove karna h wo daal diya h
        int last = nums.back();
        //abb last naam ke variable me array ki last value store kar do 
         nums[index] =last;
         nums.pop_back();
        mp[last] = index;
        mp.erase(val);
        //abb jo val remove karni th uska index upar wale index val ke name me store kara th uski value last naam ke varible me daal do kuch aise ki 20 ka index liya 
        //usko store kar liya fhir alag variable me array ka last index ki value store kar li fhir remove hone wali ke index ki jageh last value ko daal diya 
        return true;
        }
    
    int getRandom() {
        int index = rand()%nums.size();
        return nums[index];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */