class Solution {
public:

    bool canFinish(vector<int>& piles,int h , int speed){
        long long totalHours =0;    
        for(int pile:piles){
            totalHours += (pile + speed-1)/speed;
        }
        return totalHours <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
     int low = 1;
     int high = *max_element(piles.begin(), piles.end());
     int ans = high;
     while(low<=high){
        int mid = low  + (high-low)/2;
        if(canFinish(piles,h,mid)){
            ans = mid;
            high = mid-1;
        }
        else {
            low = mid+1;
        }
     }
     return ans;
    }
};