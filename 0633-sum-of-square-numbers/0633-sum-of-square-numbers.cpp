class Solution {
public:
    bool judgeSquareSum(int c) {
        long long high = pow(c, 0.5);
        long long i = 0;
        while(i <= high){
            long long sum = pow(i, 2) + pow(high, 2);
            if(sum == c){
                return true;
            }
            else if(sum < c){
                i++;
            }
            else{
                high--;
            }
        }
        return false;
    }
};