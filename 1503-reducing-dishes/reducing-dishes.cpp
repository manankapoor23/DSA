class Solution {
public:
    int solve(vector<int> &s, int index, int time,vector<vector<int>> &dp){
        //basic knapsack hai
        if(index==s.size()){
            return 0;
        }
        if(dp[index][time]!=-1){
            return dp[index][time];
        }
        int take = s[index]*(time+1)+solve(s,index+1,time+1,dp);
        int skip = 0+solve(s,index+1,time,dp);
        int ans = max(take,skip);
        return dp[index][time]=ans;
        

    }
    int maxSatisfaction(vector<int>& satisfaction){
        sort(satisfaction.begin(),satisfaction.end());
        int ans;
        vector<vector<int>> dp(satisfaction.size()+1,vector<int>(satisfaction.size()+1,-1));
        ans = solve(satisfaction,0,0,dp);
        return ans;
        
    }
};