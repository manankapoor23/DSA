class Solution {
public:
    int solve(int i,string &s,vector<int> &dp){
        // if we hae reached the end we return as 1 solved
        int n = s.size();
        if(i==s.size()){
            return 1;
        }
        if(s[i]=='0'){
            return 0;
        }
        // intialise 
        dp[n]=1;
        for(int i =n-1;i>=0;i--){
            if(s[i]!='0'){
            dp[i]+=dp[i+1];
            }
            if(i+1<n){
                if(s[i]=='1'||(s[i]=='2'&&s[i+1]<='6')){
                    dp[i]+=dp[i+2];
                }

            }
        }
        return dp[0];
    }
    int numDecodings(string s) {
        int n = s.size();
        vector<int> dp(n+1,0);
        int ans = solve(0,s,dp);
        return ans;
        
    }
};