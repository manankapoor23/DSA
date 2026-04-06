class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int left = *max_element(nums.begin(),nums.end());
        int right = accumulate(nums.begin(),nums.end(),0);

        int mid = left+(right-left)/2;
        int ans = INT_MAX;
        if(left==0 && right==0){
            return 0;
        }

        while(left<right){
            mid = left+(right-left)/2;
            int d=1;
            int sum =0;
            for(int num:nums){
                if(num+sum>mid){
                    d++;
                    sum=0;
                }
                sum+=num;
            }
            if(d>k){
                left=mid+1;
            }
            else{
                right= mid;
            }
            ans = left;
            
        }
        return ans;
        
    }
};