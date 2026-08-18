class Solution {
public:
    int solve(int n, vector<int> &dp){
        if(n==1){
            return 1;
        }
        if(n==0){
            return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int ans =0;
        //dp[n]=summation(solve[leftsubtreenodes]*solve[rightsubtreenodes]);
        for(int i =0;i<n;i++){
            // i is 0 means 0 postion given to root and hence n-i-1 to right and 0 to left
            ans+=solve(i,dp)*solve(n-i-1,dp);

        }
        dp[n]=ans;
        return dp[n];
    }
    int numTrees(int n) {
        vector<int> dp(n+1,-1);
        int ans = solve(n,dp);
        return ans;

        
    }
};