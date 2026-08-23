class Solution {
public:
    int maxxer(vector<int> &arr,int i , int j){
        int ans = INT_MIN;
        for(int k =i;k<=j;k++){
            ans = max(ans,arr[k]);
        }
        return ans;
    }
    int solve(vector<int> &arr,int i ,int j,vector<vector<int>> &dp){
        if(i==j){
            return 0;
        }
        if(j-i<2){
            return arr[i]*arr[j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans = INT_MAX;
        for(int k = i;k<j;k++){
            int a = maxxer(arr,i,k);
            int b = maxxer(arr,k+1,j);
            ans = min(ans,a*b+solve(arr,i,k,dp)+solve(arr,k+1,j,dp));
        }
        dp[i][j]=ans;
        return dp[i][j];
    }
    int mctFromLeafValues(vector<int>& arr) {
        vector<vector<int>> dp(arr.size(),vector<int>(arr.size(),-1));
        int ans = solve(arr,0,arr.size()-1,dp);
        return ans;
        
        
    }
};