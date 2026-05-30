class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
        int a = n/10;
        int  b = n%10;
        int c = a+b;
        if(c%9==0){
            return true;
        }
        return isPowerOfThree(n/3);

        
    }
};