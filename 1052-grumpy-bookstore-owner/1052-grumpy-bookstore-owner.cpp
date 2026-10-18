class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int low = 0;
        int high = minutes -1;
        int satisfied =0 ;
        int windowsum =0;
        int maxwindow =0;
        int n = customers.size();
        for(int i =0 ;i<n;i++){
            if(grumpy[i]==0){
                satisfied+=customers[i];
            }


        }
        for(int i =low;i<=high;i++){
            if(grumpy[i]==1){
                windowsum += customers[i];
            }
        }
            maxwindow = windowsum;
        while(high<n-1){
            if(grumpy[low]==1){
                windowsum -= customers[low];
            }
            low++;
            high++;
            if(grumpy[high]==1){
                windowsum+= customers[high];
            }
            maxwindow = max(maxwindow,windowsum);
        }
        return satisfied + maxwindow;
    }
};