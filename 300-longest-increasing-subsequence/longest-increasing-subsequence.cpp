class Solution {
public:
    int solve(vector<int> &nums,int curr,int prev,int n,vector<vector<int>> &dp){
        if(curr==n){
            return 0;
        }
        if(dp[curr][prev+1]!=-1){
            return dp[curr][prev+1];
        }
        int take =0;
        // taking the current element only if curr>prev
        if((prev==-1)||(nums[curr]>nums[prev] )) {
            take = 1+solve(nums,curr+1,curr,n,dp);
        }
        // excluding the current element;
        int exc=0;
        exc=0+solve(nums,curr+1,prev,n,dp);
        return dp[curr][prev+1]=max(exc,take);
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>> dp(nums.size(),vector<int>(nums.size()+1,-1));
        int ans = solve(nums,0,-1,nums.size(),dp);
        return ans;
    }
};