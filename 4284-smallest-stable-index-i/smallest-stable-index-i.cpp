class Solution {
public:
    int maxx(int left, int right, vector<int> &nums){
        int i =left;
        int end = right;
        int maxest = INT_MIN;
        while(left<=right){
            maxest = max(maxest,nums[left]);
            left++;
        }
        return maxest;
    }
    int minn(int left, int right, vector<int> &nums){
        int i =left;
        int end = right;
        int mini = INT_MAX;
        while(left<=right){
            mini = min(mini,nums[left]);
            left++;
        }
        return mini;
    }
    int maxii=0;
    int minii=0;
    int left;
    int right;
    int firstStableIndex(vector<int>& nums, int k) {
        left =0;
        for(int i =0;i<nums.size();i++){
            right =i;
            maxii = maxx(left,right,nums);
            minii = minn(right,nums.size()-1,nums);
            if((maxii-minii)<=k){
                return i;
            }
        }
        return -1;
        
    }
};