class Solution {
public:
bool solve(string &s, string &t, int i, int j, vector<vector<int>> &dp){
    if(j<0 && i>=0){
        return false;
    }
    if(j>=0 && i<0){
        return true;
    }
    if(i<0 && j<0){
        return true;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    bool ans =true;


    if(s[i]==t[j]){
        ans = solve(s,t,i-1,j-1,dp);
    }
    else{
        ans = solve(s,t,i,j-1,dp);
    }
    return dp[i][j]=ans;
}
    bool isSubsequence(string s, string t) {
        vector<vector<int>> dp(s.size(),vector<int>(t.size(),-1));
        bool ans = solve(s,t,s.size()-1,t.size()-1,dp);
        if(ans){
            return true;
        }
        else{
            return false;
        }
    }
};