class Solution {
public:
    int tabulation(vector<int> &nums) {
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return nums[0];

        vector<int> dp(n);

        dp[0] = nums[0];

        for(int i = 1; i < n; i++) {
            int pick = nums[i];
            if(i > 1) {
                pick += dp[i-2];
            }

            int skip = dp[i-1];

            dp[i] = max(pick, skip);
        }

        return dp[n-1];
    }

    int rob(vector<int>& nums) {
        return tabulation(nums);
    }
};