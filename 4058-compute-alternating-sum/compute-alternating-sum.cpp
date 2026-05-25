class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int val=0;
        for(int i =0;i<nums.size();i++){
            if(i%2==0){
                val+=nums[i];
            }
            else{
                val-=nums[i];
            }
        }
        return val;
        
    }
};