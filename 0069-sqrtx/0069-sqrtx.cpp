class Solution {
public:
    int mySqrt(int x) {
        long long l = 1, h = x;
        long long ans = 0;
       while(l<=h){
        long long mid = l + (h - l)/2;
        long long sq = mid * mid;
        if(sq == x) return mid;
        else if (sq < x){
         ans = mid;
         l = mid + 1;
       }
        else h = mid - 1;
        }
        return ans;
    }
    
};