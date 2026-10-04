class Solution {
public:
    int solve(string &s, string &r, int i,int j,vector<vector<int>> &dp){
        if(i==s.size()||j==r.size()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans =0;
        if(s[i]==r[j]){
            ans=1+solve(s,r,i+1,j+1,dp);
        }
        else{
            ans = max(solve(s,r,i+1,j,dp),solve(s,r,i,j+1,dp));
        }
        return dp[i][j]=ans;

    }
    int longestPalindromeSubseq(string s) {
        string r = s;
        reverse(r.begin(),r.end());
        vector<vector<int>> dp(s.size(),vector<int>(s.size(),-1));
        int ans = solve(s,r,0,0,dp);
        return ans;
        
    }
};