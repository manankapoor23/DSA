class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        // first thought dp solution aaya , recurrence sochke 
        int n = nums.size();

        // make dp ke arrays
        vector<vector<int>> dp_max(n, vector<int>(n));
        vector<vector<int>> dp_min(n, vector<int>(n)); 


        // base case yeh hai , think of the smallest valid which is when i==j single element
        long long ans = 0 ;
        for(int i =0;i<n;i++){
            dp_max[i][i]=nums[i];
            dp_min[i][i]=nums[i];
            for(int j=i;j<n;j++){
                if(j>i){
                    dp_max[i][j]=max(dp_max[i][j-1],nums[j]);
                    dp_min[i][j]=min(dp_min[i][j-1],nums[j]);
                }
                ans+=(dp_max[i][j]-dp_min[i][j]);
            }
        }
        return ans;
        
    }
};