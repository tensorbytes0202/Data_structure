class Solution {
public:
    bool isPowerOfTwo(int n) {
        //invalid case
    if(n<=0){
        return false;
    }
    //base case
    if(n==1){
        return true;
    }
    // odd number cannot be power of two
    if(n%2 !=0){
        return false;
    }
    return isPowerOfTwo(n/2);
    }
};ive call
        return isPowerOfTwo(n / 2);
    }
};