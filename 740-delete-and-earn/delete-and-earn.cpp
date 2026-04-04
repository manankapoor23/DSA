class Solution {
public:
    long long rob(vector<long long> &arr){
        int n=arr.size();
        if(n==0){
            return 0;
        }
        if(n==1){
            return arr[0];
        }
        vector<long long> dp(n);
        dp[0]=arr[0];
        long long take =0;
        long long skip =0;
        for(int i =1;i<n;i++){
            take = arr[i];
            if(i>1){
                take=take+dp[i-2];
            }
            skip = dp[i-1];
            dp[i]=max(take,skip);
        }
        return dp[n-1];
    }
    int deleteAndEarn(vector<int>& nums) {
        int maxVal = *max_element(nums.begin(), nums.end());
        vector<long long> aux(maxVal + 1, 0);
        for(int i =0;i<nums.size();i++){
            aux[nums[i]]+=nums[i];
        }
        // we have our aux array ready now ispe house robber wala lagado 
        return rob(aux);
        
    }
};