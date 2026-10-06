class Solution {
public:
    int solve(string &s, string &r, int i,int j,vector<vector<int>> &dp){
        if(i==s.size()){
            return r.size()-j;
        }
        if(j==r.size()){
            return s.size()-i;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans =0;
        if(s[i]==r[j]){
            return dp[i][j]=solve(s,r,i+1,j+1,dp);
        }
        return dp[i][j] = 1+min({solve(s,r,i+1,j,dp),solve(s,r,i,j+1,dp),solve(s,r,i+1,j+1,dp)});


    }

    int minDistance(string word1, string word2) {
        vector<vector<int>> dp(word1.size(),vector<int>(word2.size(),-1));
        int ans = solve(word1,word2,0,0,dp);
        return ans;
        
    }
};