class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum =0;
        int n = nums.size();
        for(int k:nums){
            sum+=k;
        }
        if(sum%2!=0){
            return false;
        }

        // an array can be divided into 2 halves , where ls = rs and 2ls = total , so 
        // our goal is 2ls = total , and ls = total/2 , hence we need to find left sum = total/2
        // our target = total/2;
        int target = sum/2; // here 11;

        vector<vector<bool>> t(n+1,vector<bool>(target+1));
        for(int j=0;j<=target;j++){
            t[0][j]=false;
        }

        for(int i =0;i<=n;i++){
            t[i][0]=true;
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=target;j++){
                if(nums[i-1]<=j){
                    t[i][j]=(t[i-1][j-nums[i-1]] || t[i-1][j]);
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[n][target];



        
    }
};