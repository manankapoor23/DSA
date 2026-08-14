class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n+1,0);
        // dp[i] here means min cost of climbing from i to n-1
        // dp[n] means we are out of the array and at the top
        dp[n] = 0;
        // we either take this which dp[i]=cost+dp[i+1];
        // we either skip it dp[i]=dp[i+2]
        for(int i =n-1;i>=0;i--){
            if(i==n-1){
                dp[i]=cost[i];
            }
            else{
            dp[i]=min(dp[i+1]+cost[i],cost[i]+dp[i+2]);
            }

        }
        return min(dp[0],dp[1]);

        

        
    }
};