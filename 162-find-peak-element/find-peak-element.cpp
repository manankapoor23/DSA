class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s = 0 ;
        int e = nums.size()-1;
        int mid = s+(e-s)/2;
        int ans = s;
        while(s<e){
            mid = s+(e-s)/2;
            if(nums[mid]>nums[mid+1]){
                e=mid;
            }
            else{
                s=mid+1;
            }
            ans = s;
        }
        return ans;
    }
};