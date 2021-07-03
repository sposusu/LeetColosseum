class Solution {
public:
    int divide(int dividend, int divisor) {
        int i =0;
        if((dividend>0 &&divisor>0) || (dividend<0 &&divisor<0) ){
            
        }
        while(dividend>0){
            dividend -= divisor;
            i++;
        }
        
        return i;
    }
};