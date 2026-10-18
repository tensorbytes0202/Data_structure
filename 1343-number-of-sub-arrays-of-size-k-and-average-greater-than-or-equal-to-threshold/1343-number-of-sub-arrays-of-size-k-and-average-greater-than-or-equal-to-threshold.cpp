class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int low =0;
        int high = k-1;
        int count =0;
        int sum =0;
        int n = arr.size();
        for(int i =low;i<=high;i++){
            sum += arr[i];
        
        }
        if (sum >= k * threshold) { 
            count++;
             }
   
        while(high<n-1){
            sum = sum - arr[low];
            low++;
            high++;
            sum = sum + arr[high];
      
        if (sum >= k * threshold) { 
            count++;
             }
        }
        return count;

    }
};