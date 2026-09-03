class Solution {
public:
    int solve(int left,int right,vector<vector<int>> &dp){
        if((right-left+1)<=1){
            // if the number are like empty or just a single number so wtvr u guess is right no min money needed which is 0
            return 0;
        }
        if(dp[left][right]!=-1){
            return dp[left][right];
        }
        int ans = INT_MAX;
        int cost =0;
        for(int i =left;i<=right;i++){
            cost = i + max(solve(left,i-1,dp),solve(i+1,right,dp));
            ans = min(cost,ans);
        }
        return dp[left][right]=ans;
    }
    int getMoneyAmount(int n) {
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        int ans = solve(1,n,dp);
        return ans;
    }
};