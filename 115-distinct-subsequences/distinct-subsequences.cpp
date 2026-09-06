class Solution {
public:
    int solve(string &s , string &t, int i, int j,vector<vector<int>> &dp){
        if(j<0){
            return 1;
        }
        if(i<0 && j>=0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int take =0;
        int skip =0;


                //. if they match
        if(s[i]==t[j]){
            take = solve(s,t,i-1,j-1,dp);
            skip = solve(s,t,i-1,j,dp);
            }
        else{
            skip = solve(s,t,i-1,j,dp);
            }  // take skip s[m]
                // if they dont match 
                // skip s[m]
        return dp[i][j]=(take+skip);
    }
    int numDistinct(string s, string t) {
        vector<vector<int>> dp(s.size()+1,vector<int>(t.size()+1,-1));
        int ans = solve(s,t,s.size()-1,t.size()-1,dp);
        return ans;

        
    }
};