class Solution {
public:
    bool solve(int n,vector<int> &dp){
        // alice starts first means she will always encounter n first 
        if(n==0||n==1){
            return false;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        // solve(n-x)==false means solve(n) true 
        // x must be legal and n%x==0
        for(int x=1;x<n;x++){
            if(n%x==0){
                if(!solve(n-x,dp)){
                    return dp[n]=1;
                }
            }
        }
        return dp[n]=0;
    }
    bool divisorGame(int n) { 
        vector<int> dp(n+1,-1);
        bool ans = solve(n,dp);
        return ans;
        
    }
};