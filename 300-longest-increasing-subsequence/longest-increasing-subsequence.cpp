class Solution {
public:
    int solve(vector<int> &nums){
        vector<int> dp(nums.size(),1);
        for(int i =1;i<nums.size();i++){
            for(int prev =0;prev<i;prev++){
                if(nums[i]>nums[prev]){
                    dp[i]=max(dp[prev]+1,dp[i]);
                }
            }
        }
        sort(dp.begin(),dp.end());
        return dp[nums.size()-1];
        

    }
    int lengthOfLIS(vector<int>& nums) {
        int ans = solve(nums);
        return ans;
        
    }
};