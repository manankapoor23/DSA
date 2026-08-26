class Solution {
public:
    int zeros(string s){
        int zero=0;
        for(char c:s){
            if(c=='0'){
                zero++;
            }
        }
        return zero;
    }
    int ones(string s){
        int one=0;
        for(char c:s){
            if(c=='1'){
                one++;
            }
        }
        return one;
    }
    int solve(vector<string> &strs, int m,int n,int idx,vector<vector<vector<int>>> &dp){
        // if we reach to the end of this array
        if(idx==strs.size()){
            return 0;
        }
        if(dp[idx][m][n]!=-1){
            return dp[idx][m][n];
        }
        int take =0;
        int zero = zeros(strs[idx]);
        int one = ones(strs[idx]);

        // taking a subset or first index means we idx++ and m-- n-- for that
        if(zero<=m && one<=n){
            take = 1+solve(strs,m-zero,n-one,idx+1,dp);
        }
        // skipping it means idx++ but no m-- and n-- and 
        int skip=solve(strs,m,n,idx+1,dp);
        int ans = max(take,skip);
        return dp[idx][m][n]=ans;
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<vector<int>>> dp(
            strs.size(),
        vector<vector<int>>(m+1, vector<int>(n+1, -1)));

        int ans = solve(strs,m,n,0,dp);
        return ans;

        
    }
};