class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.rbegin(),citations.rend());
        int h =0;
        while(h<citations.size()&& citations[h]>h){
            h++;
        }
        return h ;
    }
};
    // h=0: 6 > 0  -> h=1
    // h=1: 5 > 1  -> h=2
    // h=2: 3 > 2  -> h=3
    // h=3: 1 > 3  -> false, stop
    // citations[h] > h hi basically check kar raha hai ki at least h+1 papers ke citations sufficient hain ya nahi.