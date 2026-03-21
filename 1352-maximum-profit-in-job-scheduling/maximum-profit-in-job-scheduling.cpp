class Solution {
public:
    int bs(vector<array<int,3>> &jobs,int target){
        int s = 0;
        int e = jobs.size();
        while(s<e){
            int mid = s+(e-s)/2;
            if(jobs[mid][0]<target){
                s = mid+1;
            }
            else{
                e = mid;
            }
        }
        return s;
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = startTime.size();

        vector<array<int,3>> jobs(n);
        for(int i =0;i<n;i++){
            jobs[i]={startTime[i],endTime[i],profit[i]};
        }
        sort(jobs.begin(),jobs.end());

        // start_time array of sorted start times 
        vector<int> dp(n+1,0);
        for(int i =n-1;i>=0;i--){
            int j = bs(jobs,jobs[i][1]);
            dp[i]=max(dp[i+1],jobs[i][2]+dp[j]);
        }
        return dp[0];
        
    }
};