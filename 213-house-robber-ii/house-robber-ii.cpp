class Solution {
public:
    int picker(vector<int> &nums){
        int pick =0;
        int skip =0;
        int ans =0;
        int n = nums.size();
        if(n==0){
            return 0;
        }

        vector<int> dp(n);
        dp[0]=nums[0];
        for(int i =1;i<n;i++){
            pick = nums[i];
            if(i>1){
                pick+=dp[i-2];
            }
            skip = dp[i-1];
            dp[i] = max(pick,skip);
        }
        return dp[n-1];

    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        vector<int> vec1;
        vector<int> vec2;
        for(int i =0;i<nums.size();i++){
            if(i!=0) vec1.push_back(nums[i]); // everything except phela element wala array
            if(i!=nums.size()-1) vec2.push_back(nums[i]); // everything except last wala 
            // now we need to picker on both of these and return max
        }
        return max(picker(vec1),picker(vec2));



    
    }
};