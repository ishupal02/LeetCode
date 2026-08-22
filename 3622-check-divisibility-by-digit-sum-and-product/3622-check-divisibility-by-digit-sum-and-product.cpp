class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int mul = 1;
        int ans = 0;
        int temp = n;
        while(n>0){
            int a = n%10;
            sum += a;
            mul *= a;
            n /= 10;
        }
        ans = sum + mul;
        return (temp%ans)==0;
    }
};