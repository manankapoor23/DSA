class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count =0;
        for(int k = nums.size()-1;k>=0;k--){
            int left =0;
            int right = k-1;
            while(left<right){
                if(nums[left]+nums[right]>nums[k]){
                    count = count + (right-left);
                    right--;
                }
                else{
                    left++;
                }
            }
        }
        return count;
        
    }
};