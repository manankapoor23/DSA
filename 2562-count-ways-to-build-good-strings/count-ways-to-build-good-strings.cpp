class Solution {
public:
    int const mod = 1e9+7;
    int solve(int low,int high,int zero,int one,int length,vector<int> &dp){
        if(length>high){
            return 0;
        }
        if(dp[length]!=-1){
            return dp[length];
        }
        int count =0;
        if(length>=low){
            count+=1;
        }
        // at every length u have a choice to append 0 with 00 or 000 like or 1 like 121 or 111 etc togther in a block
        int appendA = solve(low,high,zero,one,length+zero,dp);
        int appendB=solve(low,high,zero,one,length+one,dp);
        count+=(appendA+appendB)%mod;
        return dp[length]=count;
    }
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high+1,-1);
        int ans = solve(low,high,zero,one,0,dp);
        return ans;
    }
};