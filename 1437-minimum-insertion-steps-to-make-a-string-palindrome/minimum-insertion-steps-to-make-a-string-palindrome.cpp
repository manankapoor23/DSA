class Solution {
public:
    int minInsertions(string s) {
        string s_main = s;
        reverse(s.begin(),s.end());
        int n = s_main.size();
        int m = s.size();

        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        for(int i =0;i<=n;i++){
            dp[i][0]=0;
        }

        for(int i =1;i<=n;i++){
            for(int j =1;j<=m;j++){
                if(s[j-1]==s_main[i-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        return n-dp[n][m];
    }
};