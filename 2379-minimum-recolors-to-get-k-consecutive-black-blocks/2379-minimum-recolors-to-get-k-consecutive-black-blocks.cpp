class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int count =0;
        int n = blocks.size();
        int low =0;
        int high = k-1;

        for(int i =low;i<=high;i++){
            if(blocks[i]=='W'){
                count++;
            }
        }
        int mincount = count;
        while(high<n-1){
            if(blocks[low]=='W'){
                count--;
            }
                low++;
                high++;
            if(blocks[high]=='W'){
                count++;
            }
            mincount = min(mincount,count);
        }
        return mincount;

    }
};