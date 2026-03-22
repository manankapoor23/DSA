class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxR = 0; // currently we cannot go anywhere
        for(int i =0;i<nums.size();i++){
            // check agar that i > maxR bcs if it is then we can never reach aage
            if(i>maxR){
                return false;
            }
            // and if that i lesss than our maxR which means we can move ahead and keep the maxReach as our max possible right now , old vs new new is index + that value 
            maxR = max(maxR,i+nums[i]);
            
        }
        return true;
        
    }
};