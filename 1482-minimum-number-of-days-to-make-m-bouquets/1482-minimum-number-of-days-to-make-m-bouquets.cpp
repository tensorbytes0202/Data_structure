class Solution {
public:
    bool ispossible(vector<int> &bloomDay,int m,int k,int day){
            int count =0;
            int bouquets = 0;
        for(int i =0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                count++;          
                  }
                  else{
                    count = 0;
                  }
         if(count == k){
            bouquets++;
            count =0;
         }

        }
        return bouquets >= m;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        if(bloomDay.size()<(long long)m*k)
        return -1;
        int ans =1;
        while(low<=high){
            int mid = low +(high-low)/2;
            if(ispossible(bloomDay,m,k,mid)){
                ans = mid;
                high  = mid-1;

            }
            else{
                low = mid+1;
            }
        }
        return ans;        
    }
};