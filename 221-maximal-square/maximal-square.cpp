class Solution {
public:
    int solve(vector<vector<char>> &matrix,int i ,int j,vector<vector<int>> &dp,int &maxi){
        if(i>=matrix.size()||j>=matrix[0].size()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        int right = solve(matrix,i,j+1,dp,maxi);
        int down = solve(matrix,i+1,j,dp,maxi);
        int diagonal = solve(matrix,i+1,j+1,dp,maxi);
        if(matrix[i][j]=='0'){
            dp[i][j]=0;
            return 0;
        }
        dp[i][j]=1+min(right,min(down,diagonal));
        maxi=max(maxi,dp[i][j]);
        return dp[i][j];
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        int maxi =0;
        vector<vector<int>> dp(matrix.size(),vector<int>(matrix[0].size(),-1));
        solve(matrix,0,0,dp,maxi);
        return maxi*maxi;
    }
};