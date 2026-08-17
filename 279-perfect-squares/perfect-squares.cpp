class Solution {
public:
    int solve(int n,vector<int> &dp){
        int ans = 1e9;
        if(n==0){
            return 0;
        }
        if(n<0){
            return 1e9;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        for(int i =1;i*i<=n;i++){
            int square = i*i;
            ans = min(ans,1+solve(n-square,dp));
        }
        dp[n]=ans;
        return dp[n];


    }
    bool isPf(int n){
        int sqt = int(sqrt(n));
        if(sqt*sqt==n){
            return true;
        }
        else{
            return false;
        }
    }
    int numSquares(int n) {
        // first we will have to make a vector of numbers where all are perfect squares and less than n definitely 
        vector<int> dp(n+1,-1);
        if(n<=3){
            return n;
        }
        if(isPf(n)){
            return 1;
        }
        int ans = solve(n,dp);
        if(ans<=0){
            return 0;
        }
        else{
            return ans;
        }
        
    }
};