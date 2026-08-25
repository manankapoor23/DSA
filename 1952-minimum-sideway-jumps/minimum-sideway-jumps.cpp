class Solution {
public:
    int solve(vector<int> &obstacles, int i, int lane,vector<vector<int>> &dp){
        // lane is always 2 right beginning wali 
        if(i==obstacles.size()-1){
            return 0;
            // this is the base case here where the frog is already at the end point so he doesnt need to move anymore and our state is solve(i,lane)
            
        }
        if(dp[i][lane]!=-1){
            return dp[i][lane];
        }

        int ans = INT_MAX;
        int next;
        if(obstacles[i+1]!=lane){
            // here the first lane is 2 so yes 
            // this means obstacles[i=1 pe matlab first point pe] shud not be in same lane bcs obs[i] returns which lane and in point
            // frog can move forward
            next = solve(obstacles,i+1,lane,dp);
            ans = min(ans,next);
        }
        // else waha ek obstacle has so u can move to upar ya neeche wali lane, now i remains same but lane+-
        else{
            for(int nextlane =1;nextlane<=3;nextlane++){
                if(nextlane!=lane && obstacles[i]!=nextlane){
                    ans = min(ans,1+solve(obstacles,i,nextlane,dp));
                }
            }
        }
        dp[i][lane]=ans;
        return dp[i][lane]=ans;
    }
    int minSideJumps(vector<int>& obstacles) {
        vector<vector<int>> dp(obstacles.size(),vector<int>(4,-1));
        int ans = solve(obstacles,0,2,dp);
        return ans;
        // the road is laeled from 0 to len_road 0..1..2..len_road
        // frog starts at 0 in the second line always and want to jump to n which is len_road, but there are obstacles in btweenm

        // obstacles = [0,1,2,3,0]
        // index is the point between 0 to len_road with at most one 
        // and the value of is the lane number so [1,2,3] means lane 1 has obs at point 1 and lane has at 2 and lane 3 has at 3rd point froom 0 to len_road points 

        // frogs movements : i to i+1 on same lane if no obs
        // lane a to lane b at same point only if lane b has no obs

        // minimising the number of sidejump to reach ther end which obs.size()-1

        // at each stepforg has 2 choices to either move to i+1 from i 
        // or to move to a new lane in its parralel where obs[i] is 0 mewans no obj

        // no obs[0]=0 and obs[obs.size()-1]=0 always given
        //fropggy at each point in middle lan he has top down forward and in top lane he has forward or down and in bottom he has up and forward 

        
    }
};