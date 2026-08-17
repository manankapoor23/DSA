class Solution {
public:
    int solve(vector<int> &nums,vector<int> &dp){
        int n = nums.size();
        if(n<0){
            return 0;
        }
        if(n==0){
            return 0;
        }
        dp[0]=nums[0];
        if(n>1){
        dp[1]=max(nums[0],nums[1]);
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        for(int i =2;i<n;i++){
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        return dp[n-1];
    }
    int rob(vector<int>& nums){
        vector<int> first;
        vector<int> second;
        vector<int> dp(nums.size()+1,-1);
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        for(int i =0;i<n;i++){
            if(i!=0){
                first.push_back(nums[i]);
            }
            if(i!=n-1){
                second.push_back(nums[i]);
            }
        }
        int a1 = solve(first,dp);
        int a2 = solve(second,dp);
        return max(a1,a2);

        
    }
};