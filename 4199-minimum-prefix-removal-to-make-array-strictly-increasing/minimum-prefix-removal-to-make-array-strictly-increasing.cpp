class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int sec_last=nums.size()-1;
        while(sec_last>0 && nums[sec_last]>nums[sec_last-1]){
            sec_last--;
        }
        return sec_last;

    }
};