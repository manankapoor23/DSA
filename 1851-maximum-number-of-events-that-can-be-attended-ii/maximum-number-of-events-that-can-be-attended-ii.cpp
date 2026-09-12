class Solution {
public:
    int nextCompatible(vector<vector<int>> &intervals, int i){
        int hi = intervals.size()-1;
        int lo = i+1;
        int ans = intervals.size();


        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(intervals[mid][0]>intervals[i][1]){
                ans = mid;
                hi = mid-1;
            }
            else{
                lo= mid+1;
            }

        }
        return ans;

    }

    int solve(vector<vector<int>>& intervals, int i, int j,vector<vector<int>> &dp, int k){
        int take =0;
        int skip =0;
        if(i==intervals.size()||j==k){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        

        // taking the current interval
        take = intervals[i][2]+solve(intervals,nextCompatible(intervals,i),j+1,dp,k);
        // skipping the current interval
        skip = 0+solve(intervals,i+1,j,dp,k);

        int ans = max(take,skip);
        return dp[i][j]=ans;

    }
    int maxValue(vector<vector<int>>& events, int k) {
        vector<vector<int>> dp(events.size()+1,vector<int>(k+1,-1));
        sort(events.begin(),events.end());
        
        int ans = solve(events,0,0,dp,k);
        return ans;
        
    }
};