class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left =0;
        int right=0; 
        int count=0;
        int max_l=0;

        while(right<nums.size()){
            if(nums[right]==0){
                count++;
            }
            while(count>k){
                if(nums[left]==0){
                    count--;
                }
                left++;
            }
            max_l=max(max_l,right-left+1);
            right++;
        }
        return max_l;




        
    }
};