class Solution {
public:
    int picker(vector<int> &nums,int idx,vector<int> &dp){
        int pick_sum =0;
        int notpick_sum =0;
        if(idx==0){
            //pick 0 index
            pick_sum +=nums[0];
            
        }
        if(idx<0){
            // out of bounds 
            return 0;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }

        // if we pick a[i] then we add a[i] to our sum and move to a[i-2]
        pick_sum = nums[idx]+picker(nums,idx-2,dp);
        // if we dont pick a[i] then we add 0 to our sum and move to a[i-1]
        notpick_sum =picker(nums,idx-1,dp);
        return dp[idx]=max(pick_sum,notpick_sum);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        int ans = picker(nums,nums.size()-1,dp);
        return ans;
        

        
    }
};