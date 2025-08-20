class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0 ;
        for(int i =0;i<k;i++){
            sum=sum+nums[i];
        }
        int maxsum = sum;
        int s = 0 ;
        int e = k;
        int size = nums.size();
        
        while(e<size){
            sum = sum - nums[s];
            s++;
            sum = sum+nums[e];
            e++;
            maxsum = max(maxsum,sum);
        }
        return double(maxsum)/k;

        
    }
};