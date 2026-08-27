class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector <int> ans(n, -1);
        if(2*k+1>n){
            return ans;
        }
        long long sum = 0;
        for (int i = 0; i < 2 * k + 1; i++) {
            sum += nums[i];
        }
        ans[k] = sum/(2*k+1);
        for (int i = k + 1; i < n - k; i++) {
            sum -= nums[i - k - 1];
            sum += nums[i + k];

            ans[i] = sum / (2 * k + 1);
        }
        return ans;
    }
};