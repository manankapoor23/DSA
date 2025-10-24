class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(2*nums.size());
        int n = nums.size()+1;
        for(int i =0;i<nums.size();i++){
            ans[i]=nums[i];
        }

        for(int i =0;i<nums.size();i++){
            ans[i+n-1]=nums[i];
        }
        return ans;

        
    }
};