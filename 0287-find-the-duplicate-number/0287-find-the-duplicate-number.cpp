class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow =  0;
        int fast =0;
        while(true){
            slow = nums[slow];
            fast = nums[fast];
            fast =  nums[fast];

            if(slow==fast){
                //cycle
                slow =0;
                while(slow!=fast){
                    //meeting point startin point hoga 
                    slow = nums[slow];
                    fast = nums[fast];
                }
                return slow;
            }
        }
        return -1;
    }
};