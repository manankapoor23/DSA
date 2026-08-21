class Solution {
public:
    int solve(int n,vector<int> &days,vector<int>&cost,int index,vector<int> &dp){
        // if we are already at the last day we dont have to buy any more tickets
        if(index>=n){
            return 0;
        }
        if(dp[index]!=-1){
            return dp[index];
        }
        int option1=cost[0]+solve(n,days,cost,index+1,dp);

        //. if we take a 7 day pass then our index movers utna hi
        int i ;
        for(i=index;i<n&&days[i]<7+days[index];i++);
        int option2= cost[1]+solve(n,days,cost,i,dp);
        for(i=index;i<n&&days[i]<30+days[index];i++);
        int option3 = cost[2]+solve(n,days,cost,i,dp);
        dp[index]= min(option1,min(option2,option3));
        return dp[index];
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(days.size()+1,-1);
        int ans = solve(days.size(),days,costs,0,dp);
        
        return ans;
        
    }
};