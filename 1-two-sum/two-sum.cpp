class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
        // if(nums[0]+nums[nums.size()-1]==target){
        //     index.push_back(0);
        //     index.push_back(nums.size()-1);
        //     }
        for(int i =0;i<nums.size();i++){
            for(int j =1+i;j<nums.size();j++){
                if((nums[i]+nums[j]==target)){
                    return{i,j};
                }
            }
        }
        return {};
        
    }
};