class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max= INT_MAX;
        for(int num:nums){
            if(num<max){
                max = num ;
            }
        }
        return max ; 
        
        
    
    }
};