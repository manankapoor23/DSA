class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0 ;
        for(int i =0;i<k;i++){
            sum=sum+nums[i]; // sum of the first window 
        }
        int maxsum = sum; // set max sum to that sum
        int s = 0 ; // left pointer 
        int e = k; // right pointer 
        int size = nums.size();
        
        while(e<size){
            sum = sum - nums[s]; // delete the left most 
            s++; // move it ek aage 
            sum = sum+nums[e]; // add ek right mai so window shift 
            e++;
            maxsum = max(maxsum,sum); // max sum dekho and ussey return kro
        }
        return double(maxsum)/k;

        
    }
};