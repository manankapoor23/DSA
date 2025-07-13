class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1)/2;
        int expect =0 ;
        for(int i =0;i<n;i++){
            expect= expect +nums[i];
        }
        return sum - expect;

        
    }
};