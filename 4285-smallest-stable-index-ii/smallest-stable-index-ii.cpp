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
    int prevmax;
    int prevmin=INT_MAX;

    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> minsuffix(nums.size());
        minsuffix[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-1;i>0;i--){
            minsuffix[i-1]=min(minsuffix[i],nums[i-1]);
        }
        left =0;
        prevmax = nums[0];
        prevmin;
        for(int i =0;i<nums.size();i++){
            if(nums[i]>prevmax){
                prevmax=nums[i];
            }
            if((prevmax-minsuffix[i])<=k){
                return i;
            }
        }
        return -1;
        
    }
};