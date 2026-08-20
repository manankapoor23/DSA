class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<int> hashhh(501,0);
        for(int i =0;i<nums.size();i++){
            hashhh[nums[i]]++;
        }
        for(int i =0;i<=500;i++){
            if(hashhh[i]%2!=0){
                return false;
            }
        }
        return true;
        
        
        
    }
};