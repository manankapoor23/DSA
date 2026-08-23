class Solution {
public:
    int solve(vector<int> &values, int i,int j,vector<vector<int>> &dp){
        if(j-i<2){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        long long ans = LLONG_MAX;
        for(int k=i+1;k<j;k++){
            ans = min(ans,1LL*values[i]*values[k]*values[j]+solve(values,i,k,dp)+solve(values,k,j,dp));
        }
        dp[i][j]=(int)ans;
        return dp[i][j];
    }
    int minScoreTriangulation(vector<int>& values) {
        vector<vector<int>> dp(values.size(),vector<int>(values.size(),-1));
        int ans = solve(values,0,values.size()-1,dp);
        return ans;
        
    }
};